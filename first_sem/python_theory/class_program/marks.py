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
def getTotal():
    global sum
    sum=py+c+dbms
def getAverage():
    global avg
    avg=sum/3
def getPecent():
    global perc
    perc=sum/300*100
def findGrade():
    if perc<60:
        print("Second Class\n")
    elif perc>=60 and perc<85:
        print("First class\n")
    elif perc>=85:
        print("Distinction\n")
def dispaydetails():
    print("Total marks:\n",sum)
    print("Average mark:\n",avg,"%")
    print("Percentage:\n",perc,"%")

for number in range(2,5):
    read_data()
    getTotal()
    getAverage()
    getPecent()
    findGrade()
    dispaydetails()
