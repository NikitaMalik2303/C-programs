#include <stdio.h>

int main(){

    int n,m,i,j,row1,row2,col1,col2,temp;
    int arr[100][100];
    char ch;

    printf("please enter the number of rows in the matrix");
    scanf("%d",&m);
    printf("please enter the number of columns in the matrix");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    fflush(stdin);

    printf("press r to interchange rows of the matrix and press c to interchange columns of the matrix");
    scanf("%c",&ch);

    fflush(stdin);

    switch (ch){

    case 'r':
        printf("enter the rows to interchange");
        scanf("%d%d",&row1,&row2);
        for(j=0;j<n;j++){
            temp = arr[row1-1][j];
            arr[row1-1][j]=arr[row2-1][j];
            arr[row2-1][j]=temp;
        }

    case 'c':
        printf("enter the columns to interchange");
        scanf("%d%d",&col1,&col2);
        for(i=0;i<n;i++){
            temp = arr[i][col1-1];
            arr[i][col1-1] = arr[i][col2-1];
            arr[i][col2-1] = temp;
        }

    }

    

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}