#include <stdio.h>

int main(){

    int arr[100][100];
    int m,n,i,j,elem,count=0,flag =0;
    
    printf("enter the number of columns");
    scanf("%d",&m);
    printf("enter the number of columns ");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("please enter the element to search inside the array");
    scanf("%d",&elem);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==elem){
                count++;
                flag =1;
            }
        }
    }

    if(flag ==1){
        printf("%d element occured %d times",elem,count);
    }

    return 0;
}