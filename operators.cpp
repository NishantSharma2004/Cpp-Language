#include <iostream>
using namespace std;
int main (){
    int x = 3;
    cout<<(x==3)<<endl; //realtional operator
    cout<<(x==4)<<endl; // comparison 
    cout<<(x=9)<<endl; // assigning value
    cout<<x<<endl;
    cout<<(x!=3)<<endl; // realtional operator
    x += 5;   // assignment operator
    cout<<x<<endl;
    x -= 5;   // assignment operator
    cout<<x<<endl;
    x /= 2;  // assignment operator
    cout<<x<<endl;
    x %= 5;  // assignment operator
    cout<<x<<endl;
    return 0;
}