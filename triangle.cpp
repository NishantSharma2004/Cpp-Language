#include <iostream>
using namespace std;
int main (){
    int a, b, c;
    cout <<"enter the vlue of a :";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;
    cout<<"enter the value of c :";
    cin>>c;
    if (a + b > c){
        cout << "The triangle is valid." << endl;
    }
    else if(a + c > b){
        cout << "The triangle is valid." << endl;
    }
    else if(b + c > a){
        cout << "The triangle is valid." << endl;
    }
    else{
        cout << "The triangle is not valid." << endl;
    }
}