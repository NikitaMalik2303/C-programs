#include <stdio.h>

int cornerSum(int arr[][100],int m,int n){

    int sum=0,i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if( (i==0||i==n-1) && (j==0||j==m-1)){
                sum+=arr[i][j];
            }
        }
    }
    return sum;

}

int main(){

    int arr[100][100];
    int n,m,i,j;
    printf("please enter the value of m");
    scanf("%d",&m);
    printf("please enter the value of n");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("the value of %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int ans = cornerSum(arr,m,n);
    printf("the corner sum of the elemnts is %d",ans);

    return 0;
}