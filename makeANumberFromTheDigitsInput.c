#include <stdio.h>

int main(){

    const int max = 100;
    int arr[100];
    int n,num=0,j,i;

    printf("please enter the number of digits");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %dth digit from left",i);
        scanf("%d",&arr[i]);
    }

    j=1;

    for(i=0;i<n;i++){
        num = num + arr[i] * j;
        j = j*10;
    }

    printf("the number so formed is %d ",num);


    return 0;
}