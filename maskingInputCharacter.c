#include <stdio.h>

int main(){

    char str[100],ch;
    printf("input the string\n");
    gets(str);
    printf("input the character");
    scanf("%c",&ch);

    int i=0;
    while(str[i]!='\0'){

        if(str[i]==ch){
            str[i] = '*';
        }

        i++;
    }

    puts(str);

    return 0;
}