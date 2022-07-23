#include <iostream>
using namespace std;

// void decimalToHexadecimal(int n){
//     char arr[100];
//     int count=0,i,rem=0;
//     for(i=0;n!=0;i++){
//         rem=n%16;
//         if(rem<10){
//             arr[i]=rem+'0';
//         }
//         else{
//             arr[i]=rem-10+'A';
//         }
//         n=n/16;
//         count++;
//     }
    
//     for(i=count-1;i>=0;i--){
//         cout<<arr[i];
//     }
// }
void decimalToHexadecimal(int n){

    char arr[100];
    int i=0,rem,counter=0;
    while(n>0){
        rem=n%16;
        n=n/16;
        if(rem<10){
            arr[i]=rem+'0';
        }
        else{
            arr[i]=rem-10+'A';
        }
        i++;
        counter++;
    }
    for(i=counter-1;i>=0;i--){
        cout<<arr[i];
    }

}

int main(){
    int n;
    cout<<"please enter the value of n";
    cin>>n;

    decimalToHexadecimal(n);

    return 0;
}
