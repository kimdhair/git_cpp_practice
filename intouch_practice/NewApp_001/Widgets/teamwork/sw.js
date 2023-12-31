const CW_NAME = self.location.pathname.split('/').reverse()[1];

const CACHE = CW_NAME + '-v1';

const PRECACHE_URLS = [
  './index.html',
  './' + CW_NAME + '.wjson',
  './build/build.min.js',
];

// Set all relative paths that can have their files cached.
// NOTE: The paths are relative to / part of the URL.
const PATHS_TO_CACHE = [
  '/apis/resources/'
];

self.addEventListener('install', evt => {
  evt.waitUntil(
    caches.open(CACHE)
      .then(cache => cache.addAll(PRECACHE_URLS))
      .then(() => self.skipWaiting())
  );
});

// Delete any cache that has the prefix as the custom widget name
// that does not match with the current cache version
self.addEventListener('activate', evt => {
  evt.waitUntil(
    caches.keys().then(cacheNames => {
      return cacheNames.filter(cache => {
        return cache !== CACHE && cache.indexOf(CW_NAME) !== -1;
      });
    })
    .then(cachesToDelete => {
      return Promise.all(
        cachesToDelete.map(cacheToDelete => caches.delete(cacheToDelete))
      );
    })
    .then(() => self.clients.claim())
  );
});

self.addEventListener('fetch', evt => {
  if (evt.request.cache === 'only-if-cached' && evt.request.mode !== 'same-origin') return;
  if (evt.request.method === "GET" && evt.request.url.startsWith(self.location.origin)) {
    evt.respondWith(
      caches.match(evt.request, { cacheName: CACHE })
        .then(cachedResponse => {
          if (cachedResponse) {
            return cachedResponse;
          }

          return caches.open(CACHE).then(cache => {
            return fetch(evt.request).then(response => {
              // Check whether the request url contains one of the paths
              // that can have their files cached. If so, cache it.
              for (const path of PATHS_TO_CACHE) {
                if (evt.request.url.includes(path)) {
                  return cache.put(evt.request, response.clone())
                    .then(() => response);
                }
              }

              return response;
            });
          });
        })
    );
  }
});