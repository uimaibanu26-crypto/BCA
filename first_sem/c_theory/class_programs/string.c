#include<stdio.h>
int main(){
    //char my_name[30]="afsheen\n";
    //char s_name[20];
    
    //printf(my_name);
    //printf("My name:");
    //scanf("%19s",&s_name);
    //printf("Hello,%s!",s_name);

    //char names[100];
    //printf("enter name:");
    //fgets(names,sizeof(names),stdin);
    //printf("%s",names);
    //return 0;
    
    char word[]="Afsheen";
    for(int i=0;word[i]!='\0';i++){
        printf("word[%d]=%c-\n",i,word[i]);
    }
}