#include <stdio.h>
#include <string.h>

int main(){

    int i=0,j=0,k,l,flag,pos;
    char str[100],a[100][100];
    printf("please enter the sentence");
    gets(str);
    
    k=l=0;
    for(i=0;str[i]!='\0';i++){
        if (str[i]!=' '){
            a[k][l]=str[i];
            l++;
        }
        else{
            a[k][l]='\0';
            k++;
            l=0;
        }
    }
    a[k][l]='\0';

    for(i=0;i<k;i++){
        for(j=1;j<k+1;j++){
            if(j==i || a[j][0]=='\0'){
                continue;
            }
            else{

                if (strcmp(a[i],a[j])==0){
                    flag  = 1;
                    a[j][0]='\0';
                }

            }
        }
        if(flag == 1){
            a[i][0]= '\0';
        }
        flag =0;
    }

    for(i=0; i<k+1 ; i++){
        if(a[i][0]!='\0'){
            puts(a[i]);
        }
        
    }

    

    return 0;
}