#include<stdio.h>
int main(){
    int n,catogery;
    int regular=0,premium=0,recliner=0;
    int total=0;
    float discount=0,finalamnt;
    printf("Enter number of tickets:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter catogery for ticket\n",i);
        scanf("%d",&catogery);
        if(catogery==1){
           total=total+150;
           regular++;
        }
        if (catogery==2){
            total=total+250;
            premium++;
        }if(catogery==3){
            total=total+400;
            recliner++;   
        }
        
    }
    if(n>=5){
        discount=total*0.10;
    }
    finalamnt=total-discount;
    printf("-----Final Bill-----\n");
    printf("Regular tickets: %d\n",regular);
    printf("Premium tickets: %d\n",premium);
    printf("Recliner tickets: %d\n",recliner);
    printf("Total (before discount):%d\n",total);
    if(n>=5){
        printf("Discount applied: Yes\n");
    }else{
        printf("Discount applied: No\n");
    }
    printf("Final Amount:%.2f\n",finalamnt);
    return 0;
}