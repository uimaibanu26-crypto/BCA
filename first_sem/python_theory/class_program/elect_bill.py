category=input("Enter category:")
consumed_units=int(input("Enter consumed units:"))
if category=="commercial":
    if consumed_units<=100:
        price=consumed_units*10
        print("The total bill is:Rs",price)
        peak_threshhold=input("Is peak threshhold found:")
        if peak_threshhold=='yes':
           penalty=price+100
           print("The total bill after adding penalty:Rs.",penalty)
        else:
            print()
    elif consumed_units>=101 and consumed_units<=300:
        price=consumed_units*12
        print("The total bill is:Rs",price)
        peak_threshhold=input("IS peak threshhold found:")
        if peak_threshhold=='yes':
            penalty=price+100
            print("The total bill after adding penalty:Rs.",penalty)
        else:
            print()
    elif consumed_units>300:
        price=consumed_units*15
        print("The total bill is:Rs",price)
        peak_threshhold=input("IS peak threshhold found:")
        if peak_threshhold=='yes':
            penalty=price+100
            print("The total bill after adding penalty:Rs.",penalty)
        else:
            print()
else:
    if consumed_units<=100:
            price=consumed_units*5
            print("The total bill is:Rs",price)
            peak_threshhold=input("IS peak threshhold found:")
            if peak_threshhold=='yes':
               penalty=price+50
               print("The total bill after adding penalty:Rs.",penalty)
            else:
                print()
    elif consumed_units>=101 and consumed_units<=300:
        price=consumed_units*6
        print("The total bill is:Rs",price)
        peak_threshhold=input("IS peak threshhold found:")
        if peak_threshhold=='yes':
            penalty=price+50
            print("The total bill after adding penalty:Rs.",penalty)
        else:
            print()
    elif consumed_units>300:
        price=consumed_units*8
        print("The total bill is:Rs",price)
        peak_threshhold=input("IS peak threshhold found:")
        if peak_threshhold=='yes':
            penalty=price+50
            print("The total bill after adding penalty:Rs.",penalty)
        else:
            print()
