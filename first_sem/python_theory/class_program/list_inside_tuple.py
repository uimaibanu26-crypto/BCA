num=int(input("Enter number of accounts:"))
account_details=[]
for num in range(num):
         
    name=input("Enter Account Holder Name:")
    acc_no=int(input("Enter Account Number:"))
    pan_no=int(input("Enter PAN Number:"))
    dob=input("Enter Date Of Birth:")
    email=input("Enter Email ID:")
    phone=int(input("Enter Phone Number:"))
    add=input("Enter Address:")
    curr_balance=int(input("Enter Current Balance:"))
    bank_details=(name,acc_no,pan_no,dob,[email,phone,add,curr_balance])
    print("Account details:\n",bank_details)
    account_details.append(bank_details)
    print("All account details:\n",account_details)

while True:
    print("""1.Deposit
2.Withdraw
3.Display Account Details
4.Exit""") 
    choice=int(input("Enter your chice:"))
    no=int(input("Enter account number:"))
    if no==acc_no:
        print("Account found")
    
    if choice==1:
        curr_bal=bank_details[4][3]
        dep_amount=int(input("Enter deposit amount:"))
        curr_balance=curr_bal+dep_amount
        bank_details[4][3]=curr_balance
        print("Balance:",curr_balance)
        print("Amount Deposited Successfully")
        bank_details=(name,acc_no,pan_no,dob,[email,phone,add,curr_balance])
        print("Account details:\n",bank_details)
        
    if choice==2:
        curr_bal=bank_details[4][3]
        with_amount=int(input("Enter withdraw amount:"))
        curr_balance=curr_bal-with_amount
        bank_details[4][3]=curr_balance
        print("Balance:",curr_balance)
        print("Amount Withdrawed Successfully")
        bank_details=(name,acc_no,pan_no,dob,[email,phone,add,curr_balance])
        print("Account details:\n",bank_details)
