#include <stdio.h>
#include <string.h>

int check(char str[]){

    int i=0 ,length, flag=0;
    length = strlen(str);
    for(i=0;i<=length/2;i++){
        if(str[i]!=str[length-i-1]){
            flag = 1;
            break;
        }

    }
    return flag;
}


int main(){

    const int max = 100;
    char str[max];
    printf("please enter the value of string to check if it is a palindrome or not\n");
    gets(str);

    if(check(str)==0){
        printf("the string is a palindrome");
    }
    else{
        printf("the string is a not a palindrome");
    }

    return 0;
}