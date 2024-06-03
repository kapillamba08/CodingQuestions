#include <iostream>
using namespace std;

float AreaOfCircle(int r){
    float area = 3.14 * r * r;
    return area;
}

int main(){
    int r;
    cout<<"Enter the radius: ";
    cin>>r;

    float area = AreaOfCircle(r);
    cout<<"Area of circle is: "<<area<<endl;
    return 0;
}