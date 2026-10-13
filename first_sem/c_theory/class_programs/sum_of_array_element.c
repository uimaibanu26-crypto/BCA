#include<stdio.h>
int get_array_sum(int number[]){
    int sum;
    for(int i=0;i<5;i++){
        sum=sum+number[i];
    }
    return sum;
    

}

int main(){
    int mynum[5];
    for(int i=0;i<5;i++){
        printf("Enter %d number:",i+1);

        scanf("%d",&mynum[i]);
    }
    //calculates the sum and returns sum
    int total=get_array_sum(mynum);
    printf("The sum is %d",total);
}