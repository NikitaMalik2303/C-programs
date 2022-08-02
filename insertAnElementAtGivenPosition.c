#include <stdio.h>

int main(){

    const int max = 100;
    int arr[max];
    int n,i,j,elem,pos;

    printf("please enter the value of n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %d element ",i);
        scanf("%d",&arr[i]);
    }

    printf("please enter the value of element to be added");
    scanf("%d",&elem);

    printf("please enter the position at which the element is to be entered");
    scanf("%d",&pos);

    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }

    arr[pos-1] = elem;
    n++;

    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }


    return 0;
}