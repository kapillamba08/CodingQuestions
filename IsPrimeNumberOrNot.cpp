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

    bool isPrime = isPrimeOrNot(n);

    if(isPrime){
        cout<<"Given number "<<n<<" is a prime number.";
    }
    else{
        cout<<"Given number "<<n<<" is not a prime number.";
    }
}