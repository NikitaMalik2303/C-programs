#include <stdio.h>

int main(){

    int n,m,i,j,arr[100][100],flag=0;
    printf("please enter the value of m");
    scanf("%d",&m);
    printf("please enter the value of n");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d%d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    if(m!=n){
        flag=1;
    }
    else{
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]!=arr[j][i]){
                    flag=1;
                    break;
                }
            }
        }
    }

    if(flag==0){
        printf("it is a symmetric matrix");
    }
    else{
        printf("it is not a symmetric matrix");
    }

    return 0;

}