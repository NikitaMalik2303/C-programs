#include <stdio.h>

int main(){

    int i=0,num=1000;
    char sent[num],out[num];
    printf("please enter the sentence\n");
    gets(sent);
    while(sent[i]!=32){
        out[i]=sent[i];
        i++;
    }
    puts(out);

    return 0;

}
