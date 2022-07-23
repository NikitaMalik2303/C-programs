#include <stdio.h>
#include <math.h>

int main(){

    int n,i,j;
    float norm=0,trace=0;
    int arr[100][100];

    printf("please enter the value of n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d%d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                trace+=arr[i][j];
            }
            norm+=pow(arr[i][j],2);
        }
    }

    printf("the trace of the array is  %f and the norm of the array is %f",trace,sqrt(norm));

    return 0;
}