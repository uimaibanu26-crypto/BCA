#include<stdio.h>
int main(){
    int i=1;
    int choice;
    float amount;
    int accountno=1000;
    float balance=500;
    do
    {
        printf("-------Welcome to my Bnak-------\n");
        printf("1. Dposit\n");
        printf("2. Withdraw\n");
        printf("3. Account View\n");
        printf("4. EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
    
        if(choice==1){
            printf("Enter account number:\n");
            scanf("%d",&accountno);
            if(accountno==1000){
                printf("Valid account\n");
                printf("Enter deposit amount:\n");
                scanf("%f",&amount);
                balance=balance+amount;
                printf("balance: %f\n",balance);
                printf("Account updated...");
            }else{
                printf("Invalid Account");
            }    
        }
        if(choice==2){
            printf("Enter account number:\n");
            scanf("%d",&accountno);
            if(accountno==1000){
                printf("Valid account\n");
                printf("Enter amount:");
                scanf("%f",&amount);
                if(amount<=balance){
                    balance=balance-amount;
                    printf("Current account balance %f\n",balance);
                }else{
                    printf("Insufficient balance\n");
                }
            }else{
                printf("Invalid Account");
            }           
        }        
        if(choice==3){
            printf("Account number: %d\n",accountno);
            printf("Balance: %f\n",balance);
        }
        if(choice==4){
            printf("EXIT");
        }   
    }while(1);
    return 0;
}