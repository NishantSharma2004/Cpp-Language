#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"enter the problem :";
    cin>>a>>op>>b;
    switch(op){
        case '+':
            cout<<a+b<<endl;
            break;
        case '-':
            cout<<a-b<<endl;
            break;
        case '*':
            cout<<a*b<<endl;
            break;
        case '/':
            cout<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operator."<<endl; 
    }
    return 0;
}