#include <iostream>
using namespace std;

void binaryToHexadecimal(int n){
    char arr[100];
    int lastDigit,i=0,count=0;
    while(n!=0){
        lastDigit=n%10000;
        n=n/10000;
        switch (lastDigit){
        case 0000:
            arr[i]=0+'0';
            break;
        case 0001:
            arr[i]=1+'0';
            break;
        case 0010:
            arr[i]=2+'0';
            break;
        case 0011:
            arr[i]=3+'0';
            break;
        case 0100:
            arr[i]=4+'0';
            break;
        case 0101:
            arr[i]=5+'0';
            break;
        case 0110:
            arr[i]=6+'0';
            break;
        case 0111:
            arr[i]=7+'0';
            break;
        case 1000:
            arr[i]=8+'0';
            break;
        case 1001:
            arr[i]=9+'0';
            break;
        case 1010:
            arr[i]='A';
            break;
        case 1011:
            arr[i]='B';
            break;
        case 1100:
            arr[i]='C';
            break;
        case 1101:
            arr[i]='D';
            break;
        case 1110:
            arr[i]='E';
            break;
        case 1111:
            arr[i]='F';
            break;
        }
        i++;
        count++;
    }
    for(i=count-1;i>=0;i--){
        cout<<arr[i];
    }

}

int main(){

    int n;
    cout<<"please enter the number";
    cin>>n;

    binaryToHexadecimal(n);

    return 0;
}