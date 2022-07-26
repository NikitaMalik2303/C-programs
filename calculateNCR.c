#include <stdio.h>

int fact(int n){
    int factorial = 1,i;
    for(i=1;i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int main(){

    int n,r,ncr;
    printf("please enter the value of n");
    scanf("%d",&n);
    printf("please enter the value of r");
    scanf("%d",&r);
    ncr = fact(n)/(fact(r)*fact(n-r));
    printf("the value of ncr of is %d",ncr);

    return 0;
}