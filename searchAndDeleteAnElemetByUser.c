#include <stdio.h>

int main(){

    const int max = 100;
    int arr [max];
    int n,i,elem,j;

    printf("please enter the number  of elements");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %d element",i);
        scanf("%d",&arr[i]);
    }

    printf("please enter the element to be deleted");
    scanf("%d",&elem);


    for(i=0;i<n;i++){
        if(arr[i]==elem){
            for(j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            n--;   
        }
    }
     

    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }



    return 0;
}