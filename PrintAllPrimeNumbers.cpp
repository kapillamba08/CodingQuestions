#include <iostream>
using namespace std;

bool isPrimeOrNot(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=2;i<n;i++){
        bool isPrime = isPrimeOrNot(i);
        if(isPrime){
            cout<<i<<" ";
        }
    }
}