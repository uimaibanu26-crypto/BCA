#To demostrate bank operations using list and tuples
#List inside the tuple
print("""1.Deposit
2.Withdraw
3.Display Account Details
4.Exit""")

name=input("Enter Account Holder Name:")
acc_no=int(input("Enter Account Number:"))
pan_no=int(input("Enter PAN Number:"))
dob=input("Enter Date Of Birth:")
email=input("Enter Email ID:")
phone=int(input("Enter Phone Number"))
add=input("Enter Address:")
curr_balance=int(input("Enter Current Balance:"))
acc_details=(name,acc_no,pan_no,dob,[email,phone,add,curr_balance])
print("Account details:\n",acc_details)

choice=int(input("Enter any choice:"))
if choice==1:
    amount=int(input("Enter deposit amount:"))
    curr_balance=amount+curr_balance
    print("Total Amount:",curr_balance)
    print("Amount Deposited Successfull")
acc_details=(name,acc_no,pan_no,dob,[email,phone,add,curr_balance])
print("Account details:\n",acc_details)