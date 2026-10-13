#include<stdio.h>
int main(){
    int choice;
    float num1,num2,result;
    int i=1;
    do
    {
        printf("------welcome to my calculator-------\n");
        printf("1. addition\n");
        printf("2. substraction\n");
        printf("3. multiplication\n");
        printf("4.division\n");
        printf("5.Exit\n");
        printf("Enter yor choice:");
        scanf("%d",&choice);
        if (choice==1){
            //addition
            printf("Enter first number:");
            scanf("%f",&num1);
            printf("Enter second number:");
            scanf("%f",&num2);
            result=num1+num2;
            printf("The sum is:%.0f\n",result);
        }

        if (choice==2){
            //substraction
            printf("Enter first number:");
            scanf("%f",&num1);
            printf("Enter second number:");
            scanf("%f",&num2);
            result=num1-num2;
            printf("The difference is:%.0f\n",result);
        }

        if (choice==3){
            //multiplication
            printf("Enter first number:");
            scanf("%f",&num1);
            printf("Enter second number:");
            scanf("%f",&num2);
            result=num1*num2;
            printf("the product is:%.0f\n",result);
        }

        if (choice==4){
            //division
            printf("Enter first number:");
            scanf("%f",&num1);
            printf("Enter second number:");
            scanf("%f",&num2);
            result=num1/num2;
            printf("The quotient is:%.0f\n",result);
        }

        printf("Program terminated.\n");
        printf("---------END---------\n");
    
 
    }while(1);
    return 0;
}