#include <stdio.h>

int main(){

    int arr[100],n,i,flag=0,j;
    printf("please enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("please enter the %dth element of the array",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d \n",arr[i]);
        }
        flag=0;
    }

    return 0;
}