#include<stdio.h>
int roll_no;
float sub1,sub2,sub3,sub4,sub5;
int total;
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
int getTotal(){
    total=sub1+sub2+sub3+sub4+sub5;
    printf("Total marks:%d\n",total);
    return total;
}
float getAverage(){
    avg=total/5;
    printf("Average marks:%.2f\n",avg);
    return avg;
}
float getCGPA(){
    cgpa=avg/9.5;
    printf("CGPA:%.2f\n",cgpa);
    return cgpa;
}

int main(){
    getStudentData();
    float total=getTotal();
    float avg=getAverage();
    float cgpa=getCGPA();
}