#include <stdio.h>

int main(){
    int n,arr[100],i,largest,smallest;
    printf("please enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the %dth element of the array",i);
        scanf("%d",&arr[i]);
    }
    largest=smallest=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        else if(arr[i]<smallest){
            smallest=arr[i];
        }

    }
    printf("the largest element in the array is %d and the smallest element in the array is %d",largest,smallest);

    return 0;
}