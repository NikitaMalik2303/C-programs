#include <stdio.h>
#include <string.h>

int main(){

    int i=0,count=1;
    char str[100];
    printf("please enter the string");
    gets(str);

    while(str[i]!='\0'){

        if(str[i]==' ' && str[i+1]!=' '){
            count++;
        }

        i++;
    }

    printf("the number of words in the sentence is %d",count);

    return 0;
}