#include <stdio.h>
#include <math.h>

int fact(int n){

    int factorial =1,i;
    for(i=2;i<=n;i++){
        factorial *= i; 
    }
    return factorial;

}

int main(){

    int i ,n,r;
    printf("please enter the value of n\n");
    scanf("%d",&n);
    printf("please enter the value of r");
    scanf("%d",&r);

    int ans = fact(n)/(fact(r)*fact(n-r));

    printf("the value of ncr is %d",ans);



    return 0;
}