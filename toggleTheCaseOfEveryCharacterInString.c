#include <stdio.h>
#include <string.h>

void toggle(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if (str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        else if (str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        i++;
    }
    puts(str);
}

int main(){

    int n,i;
    char str[100];
    printf("enter the string you want to toggle the case of");
    gets(str);

    toggle(str);

    return 0;
}