#include <iostream>
using namespace std;

void decimalToOctal (int n ){
    int count=0,i;
    int arr[100];

    for(i=0;n!=0;i++){
        arr[i]=n%8;
        n=n/8;
        count++;
    }
    for(i=count-1;i>=0;i--){
        cout<<arr[i];
    }

}

int main(){

    int n;
    cout<<"please enter the value of n";
    cin>>n;

    decimalToOctal(n);

    return 0;
}