#include <stdio.h>

int main(){

    const int max =100;
    int arr[max];
    int n,i,j,temp;
    char ch;

    printf("please enter the value of n ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("please enter the %d element",i);
        scanf("%d",&arr[i]); 
    }

    fflush(stdin);

    printf("please enter a to sort the array in ascending order and d to sort the array in descending order\n");
    scanf("%c",&ch);

    fflush(stdin);

    switch (ch){
    case 'a':
        
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
        
    break;
    
    case 'd':
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }   
        
    break;

    default:
        break;

    }
    
    

    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }

    return 0;
}