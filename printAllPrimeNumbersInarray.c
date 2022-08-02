#include <stdio.h>

int main(){

    const int max = 100;
    int arr[max];
    int i,j,n,flag=1;

    printf("please enter the number of elements in the array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %d element",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        flag =1;
        for(j=2;j<arr[i];j++){
            if (arr[i]%j ==0){
                flag =0;
            }
        }
        if(flag ==1){
            printf("%d \t ",arr[i]);
        }

    }

    return 0;
}