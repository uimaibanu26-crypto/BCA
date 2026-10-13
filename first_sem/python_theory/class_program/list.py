marks=['sachin',50,55,67,76,89]
my_mark=[]
sum=0
for i in range(5):
    newmarks=int(input("Enter the marks:"))
    my_mark.append(newmarks)
print("List elements are:")
for i in range(len(my_mark)):
    print(i+1,"mark is:",my_mark[i])
for i in range(len(my_mark)):
    sum+=my_mark[i]
    print(sum)
