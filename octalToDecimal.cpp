#include <iostream>
using namespace std;

int octalToDecimal(int n){
    int lastDigit,num=0,x=1;
    while(n>0){
        lastDigit=n%10;
        n=n/10;
        num+=lastDigit*x;
        x*=8;
    }
    return num;
}

int main(){

    int n;
    cout<<"please enter the value of n";
    cin>>n;

    cout<<octalToDecimal(n);

    return 0;
}