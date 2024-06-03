#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
        n = -n;
    }
    int ans=0;
    while(n>0){
        int digit = n%10;
        ans = ans * 10 + digit;
        n = n/10;
    }
    cout<<"Reverse of number is: "<< ans;
}