#include <iostream>
using namespace std;

bool isEvenOrOdd(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    bool isEven = isEvenOrOdd(n);
    if(isEven){
        cout<<n<<" is a even number.";
    }
    else{
        cout<<n<<" is a odd number.";
    }
}