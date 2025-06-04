#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month number : ";
    cin>>x;
    switch(x<=7 && x%2 !=0 && (x >= 8 && x%2 == 0)){
        case 1:
        cout<<"31"<<endl;
        break;
    }
    switch (x==4 || x==6 || x==9 || x==11){
        case 1:
        cout<<"30"<<endl;
        break;
    }
    switch (x){
        case 2:
        cout<<"28"<<endl;
    }
        
}