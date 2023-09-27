SELECT * FROM smartfactory.user;
desc smartfactory.user;
use smartfactory;
insert into user values ( 'hong1234', '8o4bkg', '홍길동', 'M', '1990-01-31', 33 ),
( 'sexysung', '87awjkdf', '성춘향', 'F', '1992-03-31', 31 ),
( 'power70', 'qxur8sda', '변사또', 'M', '1970-05-02', 53 ),
( 'hanjo', 'jk48fn4', '한조', 'M', '1984-10-18', 39 ),
( 'widowmaker', '38ewifh3', '위도우',null, '1986-06-27', 47),
( 'dvadva', 'k3f3ah', '송하나', 'F', '1994-06-03', 22 ),
( 'jungkrat', '4ifha7f', '정크랫', 'M', '1975-11-11', 24 );

update user set pw='songsong' where id='dvadva';
update user set name='핫토리' where id='hanjo';
delete from user where id='sexysung';