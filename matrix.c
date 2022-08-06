#include <stdio.h>

int primeNum (int arr[][100] ,int m,int n,char ch ){
    int i,j,k,no=1,flag =1;
    int a[2]={0,0};
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=2;k<arr[i][j];k++){
                if(arr[i][j]%k==0){
                    flag =0;
                    break;
                }
            }
            if(flag ==1){
                arr[0];
            }
        }
    }
    return arr;
}

int main(){

    int i,j,m,n;
    int arr[100][100];
    printf("enter the value of m");
    scanf("%d",&m);
    printf("enter the value of n");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    char ch;
    printf("enter T or B");
    scanf("%c",&ch);

    int ans = primeNum(arr,m,n,ch);
    printf("%d\n",ans);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }




    return 0;
}