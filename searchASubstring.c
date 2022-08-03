#include <stdio.h>

int main(){

    int i=0,j=0,flag,pos;
    char str[100],word[100];
    printf("please enter the sentence");
    gets(str);
    printf("please enter the word");
    gets(word);

    fflush(stdin);

    while(str[i]!='\0'){

        if(str[i]==word[0]){
            flag =1;
            j=0;
            while(word[j]!='\0'){
                if(str[i+j]!=word[j]){
                    flag = 0;
                    break;
                }
                j++;
            }
            if(flag == 1){
                pos = i;
                break;
            }
        }
        i++;
    }

    if(flag == 1 ){
        printf("element found in the sentence at position %d",i+1);
    }
    else{
        printf("element not found in the sentence");
    }

    return 0;
}