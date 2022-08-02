#include <stdio.h>

int main(){

    const int max =100;
    int arr[max];
    int n, i ,largestNum,smallestNum;
    printf("please enter the number of elements in the array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %d element",i);
        scanf("%d",&arr[i]);
    }

    largestNum =smallestNum = arr[0];

    for(i=0;i<n;i++){
        if(arr[i]>largestNum){
            largestNum = arr[i];
        }
        if(arr[i]<smallestNum){
            smallestNum = arr[i];
        }
    }

    printf("the smallest number is %d and the largest number is %d ",smallestNum,largestNum);

    return 0;
}