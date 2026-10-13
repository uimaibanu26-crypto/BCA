#include<stdio.h>

void addition(int num1,int num2){
int sum;
//int num1=100;
//int num2=200;
sum=num1+num2;
printf("The sum is %d\n",sum);
}

int main(){
addition(10,20);
addition(100,200);

printf("-----Pgm Terminated-----");
}