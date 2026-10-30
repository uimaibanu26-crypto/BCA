#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p=(int*)malloc(5*sizeof(int));
    
    //if(p==NULL){
        //printf("Memory not allocated");
        //return 1;
    //}
    //for(int i=0;i<5;i++){
       // printf("Location %d: address = %p value = %d\n",i,(int*) (p+i),*(p+i));
    //}
    //free(p);
    //return 0;
    for (int i=0;i<5;i++){
        printf("%d\n",p[i]);
    }
}