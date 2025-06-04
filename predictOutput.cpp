#include<iostream>
using namespace std;
int main(){
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r)<<endl; // the comparision start from left to right 
    // firstly p==q = True /1 , second True == True = 1
    int a = 2;
    int b = 4;
    int c = 4;
    cout<<(a==b==c)<<endl;  //(p == q)==(r) -> (0)==2 -> 0/ False
    //cout<<(a==(b==c)); // right to left 
}