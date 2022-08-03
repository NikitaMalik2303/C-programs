#include <stdio.h>
#include <string.h>

int isPalin(char str[],int n){

    int i=0,flag=1;
    while(str[i]!='\0'){
        if(str[i]!=str[n-i-1]){
            flag = 0;
            break;
        }
        i++;       
    }
    return flag;

}

int main(){

    char str[100];
    printf("please enter the string  ");
    gets(str);

    if(isPalin(str,strlen(str))==1){
        printf("the string is a palindrome");
    }
    else{
        printf("the string is not a palindrome");
    }


    return 0;
}