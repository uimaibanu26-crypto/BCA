category=input("Enter category:")
units=int(input("Enter consumed units:"))
bill=0
if category=='commercial':
    amt1=10
    amt2=12
    amt3=15
else:
    amt1=5
    amt2=6
    amt3=8
remaining=units
if units<=100:
    bill=remaining*amt1
    remaining=0
else:
    bill=100*amt1
    remaining=remaining-100

    if remaining<=300:
        bill=bill+remaining*amt2
        remaining=0
    else:
        bill=bill+300*amt2
        remaining=remaining-300
        bill=bill+remaining*amt3
print("Category",category)
print("Unit consumed:",units)
print("Final bill:",bill)


