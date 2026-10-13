name=input("Enter account holder name:")
no=int(input("Enter account number:"))
balance=0
while True:
    print("""1.DEPOSIT
2.WITHDRAW
3.Display Account Details
4.EXIT""")
    choice=int(input("Enter your choice:"))
    if choice==1:
        amount=float(input("Enter deposit amount:"))
        if amount>0:    
            balance=amount+balance
            print("Amount Deposited Successfully")
        else:
            print("Enter Positive Amount")
    if choice==2:
        amount=float(input("Enter Withdraw Amount:"))
        if amount>0:
            balance=balance-amount
            print("Amount Withdrawed Successfully")
        elif amount<0:
            print("Enter Positive Amount")
        elif amount>balance:
            print("Insufficient Balance")
    if choice==3:
        print("Account holder:",name)
        print("Account number:",no)
        print("Balance:",balance)
    if choice==4:
        print("EXIT")
    if choice>4:
        print("Invalid choice")
        break 