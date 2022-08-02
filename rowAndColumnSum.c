#include <stdio.h>

int main(){

    int arr[100][100],rowsum[10],colsum[10];
    int m,n,i,j;

    printf("enter the number of rows");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<m;i++){
        rowsum[i]=0;
        for(j=0;j<m;j++){
            rowsum[i] += arr[i][j];
        }
    }

    for(j=0;j<m;j++){
        colsum[j]=0;
        for(i=0;i<n;i++){
            colsum[j]+=arr[i][j];
        }
    }

    printf("rowsum\n");

    for(i=0;i<m;i++){
        printf("%d\t",rowsum[i]);
    }

    printf("\ncolsum\n");

    for(j=0;j<n;j++){
        printf("%d\t",colsum[j]);
    }



    return 0;
}