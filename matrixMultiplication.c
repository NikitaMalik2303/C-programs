#include <stdio.h>

int main(){

    int a[100][100],b[100][100],c[100][100];
    int n,m,i,j,k,p,q;

    printf("please enter the number of rows in the matrix in matrix a");
    scanf("%d",&m);
    printf("please enter the number of columns in the matrix in matrix a");
    scanf("%d",&n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("please enter the number of rows in the matrix in matrix b");
    scanf("%d",&p);
    printf("please enter the number of columns in the matrix in matrix b");
    scanf("%d",&q);

    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("please enter the %d %d element",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    


    return 0;
}