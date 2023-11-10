f=open("./23_11_10/test.txt","w")
f.write("hello world\nhi\nhahaha")
f.close()

f2=open("./23_11_10/test.txt","r")
print(f2.readlines())
f2.close()