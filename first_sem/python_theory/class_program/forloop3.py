evennum=0
count=0
prime=0
num1=int(input("Enter number:"))
for num in range(1,num1+1):
    if num%2==0:
        evennum=evennum+num
    if num%3==0 and num%5==0:
        count+=1
    if num1>=2:
        for i in range(2,num1):
            if num1%i==0:
                break
            
            elif num1>prime:
                prime=num1
print("Sum of even numbers are:",evennum)       
print("Count of numbers divisible by 3 & 5:",count)
print("Largest prime number:",prime)