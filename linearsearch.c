#include <stdio.h>

int main(){

    const int max = 100;
    int arr[max];
    int n,i,flag = 0,elem;

    printf("please enter the number of elements in the array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %d element ",i);
        scanf("%d",&arr[i]);
    }

    printf("please enter the element to be searched for\n");
    scanf("%d",&elem);

    for(i=0;i<n;i++){
        if(arr[i]==elem){
            flag =1;
            //checking for multiple occurences
            if(flag ==1){
                printf("the element is found at %dth position",i+1);
            }
        }
    }



    return 0;
}