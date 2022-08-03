#include <stdio.h>

int largest(int arr[],int n){
    int i,larg;
    larg = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>larg){
            larg = arr[i];
        }
    }
    return larg;
}

int main(){

    int n,i,arr[100];

    printf("please enter the size of the array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("the largest number in the array is %d ",largest(arr,n));


    return 0;
}