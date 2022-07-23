#include <iostream>
using namespace std;

int binToDecimal(int n){
    int x=1,num=0,i;
    while(n>0){
        i=n%10;
        n=n/10;
        num+=i*x;
        x*=2;
    }
    return num;
}

int main(){

    int n;
    cout<<"enter the binary number";
    cin>>n;

    cout<<binToDecimal(n);

    return 0;
}