#include<iostream>
using namespace std;
int main(){
    int x = 8;
    int y = 8;
    cout<<x++<<endl; // post increment because first output is 8 not updated value
    cout<<x<<endl;  // now value updated 

    cout<<++y<<endl; // while in pre increment the value is updated 
    x--;
    cout<<x<<endl;
    --x;
    cout<<x<<endl;
    y--;
    cout<<y<<endl;
    cout<<y<<endl;
    --y;
    cout<<y<<endl;
    return 0;
}