#include <stdio.h>

int isPrime(int n){
    int i ,flag =1;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag =0;
            break;
        }
    }
    return flag;
}

int main(){

    int i=0,n;
    int count =1;
    
    printf("enter the first n numbers you want to output");
    scanf("%d",&n);
    for(i=2;count<=n;i++){
        if(isPrime(i)==1){
            printf("%d\t",i);
            count++;
        }
    }

    return 0;
}