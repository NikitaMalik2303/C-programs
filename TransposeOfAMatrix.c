#include <stdio.h>

int main(){

    int arr[100][100];
    int n,i,j,temp;

    printf("enter the size of the matrix");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>j){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            }
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}