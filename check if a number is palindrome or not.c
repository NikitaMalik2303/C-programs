#include <stdio.h>;

int main(){
    int num,revNum=0,orgNum,lastDigit;
    printf("please enter the number/n");
    scanf("%d",&num);
    orgNum=num;
    while(num){
        lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num=num/10;
    }
    if(orgNum==revNum){
        printf("the number %d is a palindrome",orgNum);
    }
    else{
        printf("the number %d is not a palindrome",orgNum);
    }
    return 0;
}
