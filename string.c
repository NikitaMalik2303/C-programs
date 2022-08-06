#include <stdio.h>

void modify (char str[],char ch){
    int i=0 ,j;
    while(str[i]!='\0'){
        if(str[i]==' '){
            str[i]=ch;
        }
        else{
        if((i+1)%2==0){
            str[i]+=1;
        }
        else{
            str[i]-=1;
        }

        }

        i++;
    }
    return;
}

int main(){

    int i,j;
    char str[100],ch;

    printf("enter the string");
    gets(str);

    printf("enter the value of character");
    scanf("%c",&ch);

    modify(str,ch);

    printf("printing the string");
    puts(str);

    return 0;
}