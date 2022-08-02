#include <Stdio.h>

int main(){

    int arr[100][100];
    int n,i,j,flag=1;

    printf("please enter size of the matrix");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (j>i){
                if(arr[i][j]!= 0){
                    flag =0;
                    break;
                }
            }
        }
    }

    if(flag ==1){
        printf("it is a lower traingular matrix");
    }
    else{
        printf("it is not a lower triangular matrix");
    }


    return 0;
}