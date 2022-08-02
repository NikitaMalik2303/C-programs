#include <stdio.h>

int main(){

    int m,n,i,j,temp;
    int arr[10][10];

    printf("please enter the number of rows in the matrix");
    scanf("%d",&m);
    printf("please enter the number of columns in the matrix");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                temp = arr[i][j];
                arr[i][j] = arr[i][n-i-1];
                arr[i][n-i-1] = temp;
            }
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}