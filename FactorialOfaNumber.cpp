#include <iostream>
using namespace std;

long long int factorial(long long int n){
    long long int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    long long int result = factorial(n);
    cout<<"Factorial of given number is: "<<result<<endl;
    return 0;
}