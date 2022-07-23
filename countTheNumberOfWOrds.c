#include <stdio.h>
#include <string.h>

int main(){

    const int max=100;
    char str[max];
    int i=0,count=1;
    printf("please enter the string\n");
    gets(str);
    while(str[i]!='\0'){
        if((str[i]==' ') && (str[i+1]!=' ')){
            count++;
        }
        i++;
    }
    printf("the number of words in the sentence are %d",count);

    return  0 ;
}