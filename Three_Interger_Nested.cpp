#include<iostream>
using namespace std;
int mian(){
    int a , b, c;
    cout<<"Enter the number";
    cin>>a;
    cout<<"Enter the second number";
    cin>>b;
    cout<<"Enter the third number";
    cin>>c;
    if (a>b){
        if(a>c){
            cout<<a<<" a is the largest number."<<endl;
        } else {
            cout<<c<<" c is the largest number."<<endl;
        }
        if (b>c){
            cout<<b<<" b is the second largest number."<<endl;
        } else {
            cout<<c<<" c is the second largest number."<<endl;
        }

    }
    return 1;
}