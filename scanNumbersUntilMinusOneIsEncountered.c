#include <stdio.h>
#include <math.h>

int main(){

    int num=0,i,pNum=0,cNum=0,flag=0;;
    do
    {
        printf("enter the number \n");
        scanf("%d",&num);
        if(num==-1){
            break;
        }
        if(num==1){
            continue;
        }
        else{
            for(i=2;i<num;i++){
                if(num%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cNum++;
            }
            else{
                pNum++;
            }
        }
        flag=0;
    }while (num!=-1);
    
    // while(num!=-1){
    //     printf("enter the number \n");
    //     scanf("%d",&num);
    //     if(num==-1){
    //         break;
    //     }
    //     if(num==1){
    //         continue;
    //     }
    //     else{
    //         for(i=2;i<num;i++){
    //             if(num%i==0){
    //                 flag=1;
    //                 break;
    //             }
    //         }
    //         if(flag==1){
    //             cNum++;
    //         }
    //         else{
    //             pNum++;
    //         }
    //     }
    //     flag=0;
        
    // }
    printf("the total number of composite numbers entered is %d and the total number of prime numbers entered is %d",cNum,pNum);
        
    return 0;
}