#include <stdio.h>

int main(){

    char ch;
    printf("please enter the value of character whose ascii value you need to find\n");
    scanf("%c",&ch);
    int val=(int)ch;
    printf("the ascii value of the character %c is %d",ch,val);

    return 0;
}