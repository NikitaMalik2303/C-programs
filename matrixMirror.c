#include <stdio.h>


void matrixMirror(int arr[][100], int m, int n){
    int i,j,temp;
    for(i=0;i<m;i++){
        for(j=0;j<n/2;j++){
            temp = arr[i][j];
            arr[i][j]=arr[i][n-j-1];
            arr[i][n-j-1]=temp;
        }
    }
    return ;
}


int main(){

    int i,j,m,n;
    int arr[100][100];
    printf("enter the number of rows");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the value of %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }   

    matrixMirror(arr,m,n);
       

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}