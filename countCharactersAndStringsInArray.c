#include <stdio.h>

int main(){

    char str[100];
    int i=0,cSum=0,dSum=0,sum=0;

    printf("enter the string\n");
    gets(str);

    while(str[i]!='\0'){

        if((str[i]>='a'&& str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            cSum++;
        }
        if(str[i]>='0' && str[i]<='9'){
            dSum ++;
            sum += (str[i]-'0');
        }
        i++;
    }

    printf("the number of characters are %d \nthe number of digits are %d \nthe total sum of digits is %d",cSum,dSum,sum);

    return 0;
}