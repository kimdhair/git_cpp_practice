import pandas as pd

# index=["a","b","c","d"]
# a=pd.Series([1,2,3,4],index=index)
# b=pd.Series([5,6,7,8],index=index)
# c=pd.DataFrame({"a":a,"b":b})
# print(c)

index=["a","b","c","d"]
data={'a':[1,2,3,4],'b':[5,6,7,8]}
c=pd.DataFrame(data,columns=['a','b'],index=index)
print(c)