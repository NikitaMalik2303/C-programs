#include <stdio.h>
#include <string.h>

int main(){
    
    int i=0,j=0,flag,pos,p,q;
    char str[100],word[100];
    printf("please enter the sentence");
    gets(str);
    printf("please enter the word in the sentence");
    gets(word);

    fflush(stdin);

    while(str[i]!='\0'){

        if(str[i]==word[0]){
            flag =1;
            j=0;
            while(word[j]!='\0'){
                if(str[i+j]!=word[j]){
                    flag =0;
                    break;
                }
                j++;
            }
            if(flag ==1){
                pos = i;
                break;
            }
        }

        i++;
    }

    p = strlen(str);
    q = strlen(word);

    for(i=pos;i<p-q;i++){
        str[i]= str[i+q+1];
    }

    str[i]='\0';
    puts(str);



    return 0;
}
