#include <stdio.h>
#include <string.h>

int main(){

    int n,i,j;
    char str[100][100],temp[100];
    printf("please enter the number of words you want to input");
    scanf("%d",&n);

    fflush(stdin);

    for(i=0;i<n;i++){
        printf("please enter the %d word",i);
        gets(str[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=i;j<n;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(i=0;i<n;i++){
        puts(str[i]);
        printf("\n");
    }


    return 0;
}