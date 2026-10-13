name=''
roll_no=0
py=0
c=0
dbms=0
sum=0
avg=0
perc=0
def read_data(): 
    global name,roll_no,py,c,dbms
    name=input("Enter name:\n")
    roll_no=int(input("Enter Roll Number:\n"))
    py=int(input("Enter Python marks:\n"))
    c=int(input("Enter C Program marks:\n"))
    dbms=int(input("Enter DBMS marks:\n"))
    return name,roll_no,py,c,dbms
def getTotal(first,second,third):
    global sum
    sum=first+second+third
    return sum
def getAverage():
    global avg
    avg=sum/3
    return avg
def getPecent():
    global perc
    perc=sum/300*100
    return perc
def findGrade():
    if perc<60:
        print("Second Class\n")
    elif perc>=60 and perc<85:
        print("First class\n")
    elif perc>=85:
        print("Distinction\n")
def dispaydetails():
    print("Total marks:\n",sum)
    print(f"Average mark:\n{avg:.2f}%")
    print(f"Percentage:{perc:.2f}%")

for number in range(2,5):
    a,b,c,d,e=read_data()
    total=getTotal()
    average=getAverage()
    percentage=getPecent()
    findGrade()
    dispaydetails()
