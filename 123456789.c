#include <stdio.h>

void modify (int arr[][100],int m,int n){
    int i,j,digit,num;
    int a[100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            num = arr[i][j];
            while(num>0){  
                digit = num%10;  
                num=num/10;  
                a[k] = digit;  
                k++;  
            }  
        }  
    }  
  
  
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


    return 0;
}