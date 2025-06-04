#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    // condition ? true : false
    marks > 33 ? cout<<"You are pass." : cout<<"You are fail."<<endl;
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout<<"\n value of x : "<<x<<endl;
    return 0;
}