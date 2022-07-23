#include <stdio.h>

int main(){

    int n,i,j,arr[100],elem,pos,temp;

    printf("please enter the size of the array");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %dth element",i);
        scanf("%d",&arr[i]);
    }

    printf("enter the element\n");
    scanf("%d",&elem);
    printf("enter the position of the element\n");
    scanf("%d",&pos);

    for(i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    if(pos==1){
        arr[0]=elem;
    }
    else{
        arr[pos-1]=elem;
    }
    n++;

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}