#include<stdio.h>
int roll_no;
float sub1,sub2,sub3,sub4,sub5;
float total;
float avg;
float cgpa;
void getStudentData(){
    printf("Enter Roll number:");
    scanf("%d",&roll_no);
    printf("Python mark:");
    scanf("%f",&sub1);
    printf("C prgm mark:");
    scanf("%f",&sub2);
    printf("DBMS mark:");
    scanf("%f",&sub3);
    printf("CF marks:");
    scanf("%f",&sub4);
    printf("Maths mark:");
    scanf("%f",&sub5);
}
void getTotal(){
    total=sub1+sub2+sub3+sub4+sub5;
}
void getAverage(){
    avg=total/5;
}
void getCGPA(){
    cgpa=avg/9.5;
}
void displayStudentDetails(){
    printf("Roll Number:%d",roll_no);
    printf("Total mark:%.2f\n",total);
    printf("Average mark:%.2f\n",avg);
    printf("CGPA:%.2f\n",cgpa);
}
int main(){
    getStudentData();
    getTotal();
    getAverage();
    getCGPA();
    displayStudentDetails();
}