#include <stdio.h>

int main(){

    int arr[100][100],rowsum[100],colsum[100];
    int n,i,j,flag =1,pdiagnol=0,sdiagnol=0;

    printf("enter the size of the square matrix");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                pdiagnol+=arr[i][j];
                sdiagnol+=arr[i][n-i-1];
            }
        }
    }

    for(i=0;i<n;i++){
        rowsum[i]=colsum[i]=0;
        for(j=0;j<n;j++){
            rowsum[i]+=arr[i][j];
            colsum[i]+=arr[j][i];
        }
    }

    for (i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(colsum[i]!=rowsum[j]){
            flag =0;
            break;
        }
        }
    }

    // for(i=0;i<n;i++){
    //     if(colsum[i]!=rowsum[i]){
    //         flag =0;
    //         break;
    //     }
    // }

    // if(colsum[0]!=pdiagnol && colsum[0]!=sdiagnol){
    //     flag = 0;
    // }


    if (flag ==1){
        printf("the given matrix is a magic square");
    }
    else{
        printf("the given matrix is not a magic square");
    }


    return 0;
}