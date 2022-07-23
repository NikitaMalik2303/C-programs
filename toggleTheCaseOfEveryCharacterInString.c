#include <Stdio.h>

int main(){

    const int max=100;
    char str[max];
    int i=0;
    printf("please enter the string\n");
    gets(str);

    while(str[i]!='\0'){

        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        i++;

    }

    printf("the string after toogle of characters is\n");
    puts(str);


    return 0;
}