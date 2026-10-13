sub1=int(input("Subject 1 mark:"))
sub2=int(input("Subject 2 mark:"))
sub3=int(input("Subject 3 mark:"))
if sub1<0 or sub1>100 or sub2<0 or sub2>100 or sub3<0 or sub3>100:
    print("Invalid marks! Enter marks between 0 and 100")
else:   
    total=sub1+sub2+sub3
    avg=total/3
    perc=total/300*100
    print("Total mark:",total)
    print(f"Average mark:{avg:.2f}")
    print(f"Percentage:{perc:.2f}%")
    if perc>=70:
        print("DISTINCTION")
    elif perc>=60 and perc<70:
        print("FIRST CLASS") 
    elif perc>=40 and perc<60:
        print("SECOND CLASS")
    else:
        print("FAIL")
