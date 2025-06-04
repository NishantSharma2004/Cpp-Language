#include <iostream>
using namespace std;
int main (){
    int a ,b,r,q;
    cout<<"Enter the value of a =";
    cin>>a; // dividend
    cout<<"Enter the value of b =";
    cin>>b; // divisor
    q = a/b; // quotient
    if (a>b)
    {
        cout<<"Quotient ="<<q<<endl;
    }
    else{
        cout<<"not eligible";
    }
    //a = (b*q)+r , r = a(b*q)
    //r = a -(b*q);
    r = a %b; // not capable when dividend is small then divisor = 2/4 = remainder =2
    cout<<r<<endl;
    cout<<-99%4<<endl;
}