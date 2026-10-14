#include<stdio.h>
int main(){
    int x=10;    //stores value 10
    int *p;      //creating a pointer
    p=&x;        //initialising pointer

    printf("%d\n",x);     //prints the address of the x
    printf("%p\n",&x);
    printf("%p\n",p);
}