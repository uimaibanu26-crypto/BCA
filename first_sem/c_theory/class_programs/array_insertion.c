#include<stdio.h>
int main(){
    int elements[5];
    int newdata;
    int index_value;
    for(int i=0;i<4;i++){
        printf("Input %d array element:",i+1);
        scanf("%d",&elements[i]);
    }
    printf("Enter the new element:");
    scanf("%d",&newdata);
    printf("Enter the index value:");
    scanf("%d",&index_value);
    //insertion process to insert 'newdata' at index 'index_value'
    elements[4]=elements[5];
    elements[3]=elements[4];
    elements[3]=newdata;
    for(int i=0;i<=5;i++){
        printf("The new array is:",i+1);
        scanf("%d",&newdata);
    }
}