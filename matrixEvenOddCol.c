#include <stdio.h>
#include <math.h>

void modify(int arr[][100],int m,int n){

    int i,j,lastdigit,rev=0,sum =0;;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){

            lastdigit = rev= sum=0;
            if((j+1)%2==0){
                while(arr[i][j]>0){
                    lastdigit = arr[i][j]%10;
                    sum+=pow(lastdigit,2);
                    arr[i][j]=arr[i][j]/10;
                }
                arr[i][j] = sum;
            }
            else{
                while(arr[i][j]>0){
                    lastdigit = arr[i][j]%10;
                    arr[i][j]=arr[i][j]/10;
                    rev = rev*10 +lastdigit;
                }
                arr[i][j]=rev;
            }
        }
    }
}


int main(){

    int i,j,m,n;
    int arr[100][100];
    printf("enter the number of rows");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the value of %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }


    modify(arr,m,n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}