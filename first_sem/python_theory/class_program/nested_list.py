name=input("Enter student name:")
roll=int(input("Enter roll number:"))
phone=int(input("Enter phone number:"))
email=input("Enter email:")
marks=[]
m1=int(input("Enter subject 1 mark:"))
marks.append(m1)
m2=int(input("Enter subject 2 mark:"))
marks.append(m2)
m3=int(input("Enter subject 3 mark:"))
marks.append(m3)
m4=int(input("Enter subject 4 mark:"))
marks.append(m4)
m5=int(input("Enter subject 5 mark:"))
marks.append(m5)
student_details=[name,roll,phone,email,[m1,m2,m3,m4,m5]]
print(student_details)
total=0
for i in range(len(marks)):
    total+=marks[i]
    print("Total marks:",total)