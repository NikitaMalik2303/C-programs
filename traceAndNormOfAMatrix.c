#include <stdio.h>
#include <math.h>

int main(){

    int arr[100][100];
    int m,n,i,j,trace=0;
    float norm=0;

    printf("please enter the number of rows in the matrix");
    scanf("%d",&m);
    printf("please enter the number of columns in  the matrix");
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
                trace += arr[i][j];
            }
            norm += arr[i][j];
        }
    }

    printf("the trace of the matrix is %d and the norm of the matrix is %f",trace,sqrt(norm));


    return 0;
}