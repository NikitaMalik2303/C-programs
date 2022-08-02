#include <stdio.h>

int main(){

    int arr[100][100];
    int i,j,flag =1,n,m;
    
    printf("please enter the number of rows of the matrix");
    scanf("%d",&m);
    printf("please enter the number of columns of the matrix");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i+1,j+1);
            scanf("%d",&arr[i][j]);
            
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                flag  = 0;
                break;
            }
        }
    }

    if(flag ==1){
        printf("it is a  symmetric matrix");
    }
    else{
        printf("it is an unsymmetric matrix");
    }


    return 0;
}