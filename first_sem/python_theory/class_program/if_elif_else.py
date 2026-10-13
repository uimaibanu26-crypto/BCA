print("Ticket pricing system")
price=250
age=int(input("Enter age:"))
weekday='monday','tuesday','wednesday','thursday','friday'
weekend='saturday','sunday'
day=input("Enter day:")
time=input("Enter show timing:")
if day==weekend:
    if time=='morning':
        if age<13:
            ticket_price=250-(250*50/100)+62.5
            print("Child ticket price:",ticket_price)
        elif age>=13 and age<=59:
            ticket_price=250+62.5
            print("Adult ticket price:",ticket_price)
        else:
            ticket_price=250-25+62.5
            print("Senior citizen ticket price:",ticket_price)
    elif time=='afternoon':
        if age<13:
            ticket_price=250-125+62.5+25
            print("Child ticket price:",ticket_price)
        elif age>=13 and age<=59:
            ticket_price=250+62.5+25
            print("Adult ticket price:",ticket_price)
        else:
            ticket_price=250-25+62.5+25
            print("Child ticket price:",ticket_price)
    else:
        if age<13:
            ticket_price=250-125+62.5+75
            print("Child ticket price:",ticket_price)
        elif age>=13 and age<=59:
            ticket_price=250+62.5+75
            print("Adult ticket price:",ticket_price)
        else:
            ticket_price=250-25+62.5+75
            print("Child ticket price:",ticket_price)
else:
    if age<13:
        ticket_price=250-125
        print("Child ticket price:",ticket_price)
    elif age>=13 and age<=59:
        print("Adult ticket price:",price)
    else:
        ticket_price=250-25
        print("Child ticket price:",ticket_price)

