/*pgm to store and display 5 sub marks
for student*/
#include<stdio.h>
int main(){
    int sub_marks[5];
    int my_marks;
    //Storing Data/Array Initialization--->array_name[index]=data/value
    sub_marks[0]=80;    //stores '80' in an array position whose index is'0'
    sub_marks[1]=78;    //stores '78' in an array position whose index is'1'
    sub_marks[2]=68;    //stores '68' in an array position whose index is'2'
    sub_marks[3]=58;
    sub_marks[4]=88;
    printf("First Subject Mark:%d\n",sub_marks[0]);
    printf("Second Subject Mark:%d\n",sub_marks[1]);
    printf("Third Subject Mark:%d\n",sub_marks[2]);
    printf("Fourth Subject Mark:%d\n",sub_marks[3]);
    printf("Fifth Subject Mark:%d\n",sub_marks[4]);
    
    for(int i=0;i<5;i++){
        printf("Enter %d subject marks:[int data]",i+1);
        scanf("%d",&my_marks);
    }
    
    
}
