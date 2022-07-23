#include <stdio.h>
#include <string.h>

int main(){

    const int max =100;
    char str[max],word[max];
    int i=0,n,pos,flag=1,k;
    int j=0;

    printf("please enter the string\n");
    gets(str);

    printf("please enter the word\n");
    scanf("%s",word);

    
    while(str[i]!='\0'){

        if(str[i]==word[0]){
            flag=1;

            while(word[j]!='\0'){

                if(str[i+j]!=word[j]){
                    flag=0;
                    break;
                }
                j++;
            }

            if(flag==1){
                    pos=i+1;
                    break;
            }

        }

        i++;

    }
    n = strlen(str);
    k = strlen(word);

    for(j=i;j<(n-k);j++){
        str[j] = str[j+k];
    }
    str[j]='\0';

    puts(str);

    return 0;
}