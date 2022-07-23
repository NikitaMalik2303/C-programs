# include <stdio.h>
int main(){
    int num,revNum=0,lastDigit,orgNum=0;
    printf("please enter the number\n");
    scanf("%d",&num);
    orgNum=num;
    while(num){
        lastDigit=num%10;
        revNum=revNum*10+lastDigit;
        num=num/10;
    }
    printf("the reverse of the number %d is : %d",orgNum,revNum);
    return 0;
}
