import numpy as np

arr=np.array([1,1,2,3,4,5,5,5,5,7,8,9,10,11,24,100])
arr2=np.unique(arr)
print(f"1번: {arr2}")
print(f"2번 최대: {np.max(arr2)} 최소: {np.min(arr2)} 평균: {np.mean(arr2)}")
print(f"3번: {np.sum(arr2)}")
print(f"4번: {np.median(arr)}")