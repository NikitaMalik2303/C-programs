#include <stdio.h>

int main(){

    int n,k,i,j,num;
    printf("please enter the number n\n");
    scanf("%d",&n);
    printf("please enter the number k\n");
    scanf("%d",&k);

    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
            num=i*j;
            printf("%d  ",num);
        }
        printf("\n");
    }

    return 0;
}