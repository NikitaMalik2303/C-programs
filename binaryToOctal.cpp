#include <iostream>
using namespace std;

int binaryToOctal(int n){
    int arr[100];
    int lastdigit,i=0,count=0,num=0;

    while(n!=0){
        lastdigit=n%1000;
        n=n/1000;
        switch (lastdigit){
        case 000:
            arr[i]=0;
            break;
        case 001:
            arr[i]=1;
            break;
        case 010:
            arr[i]=2;
            break;
        case 011:
            arr[i]=3;
            break;
        case 100:
            arr[i]=4;
            break;
        case 101:
            arr[i]=5;
            break;
        case 110:
            arr[i]=6;
            break;
        case 111:
            arr[i]=7;
            break;
            
        }
        i++;
        count++;
    }
    for(i=count-1;i>=0;i--){
        num=num*10+arr[i];
    }
    return num;
}

int main(){

    int n;
    cout<<"please enter the binary number";
    cin>>n;

    cout<<binaryToOctal(n);

    return 0;
}