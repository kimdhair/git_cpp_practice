student=dict()
student={"Alice":85,"Bob":90,"Charlie":95}
student["David"]=80
student["Alice"]=88
del(student["Bob"])
for i in student.keys():
    print(i,student[i])