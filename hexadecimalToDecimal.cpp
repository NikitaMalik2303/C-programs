#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(string str){
    int num=0,x=1;
    int len=str.size();
    for(int i=len-1;i>=0;i--){
        if(str[i]>='0'&& str[i]<='9'){
            num+=(str[i]-'0')*x;
            x*=16;
        }
        else if(str[i]>='A' && str[i]<='F'){
            num+=(str[i]-'A')*x;
            x*=16;
        }
    }
    return num;
}

int main(){

    string ch;
    cout<<"please enter the hexadecimal number";
    cin>>ch;

    cout<<hexToDecimal(ch);

    return 0;
}