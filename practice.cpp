#include<iostream>
using namespace std;
int main(){
    int a ;
    float b, c;
    cout <<"Enter the number =";
    cin>> a;
    if (a % 2 == 0) {
        cout << "Even number=" << endl;
    } else {
        cout << "Odd number" << endl;
    }
    int avg;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if (b < 0 || c < 0) {
        cout << "Negative numbers are not allowed." << endl;
        return 1; // Exit the program if negative numbers are entered
    }
    avg = float((b + c) / 2);
    cout<<"avg ="<< avg << endl;
    int math , english , science , history;
    cout << "Enter the marks of math, english, science, and history: ";
    cin >> math >> english >> science >> history;
    int total = math + english + science + history;
    cout<< "Total marks : " << total << endl;
    if (total >= 200) {
        cout << "You are passed" << endl;
    } else {
        cout << "You are failed" << endl;
    }
    int percentage = (total * 100) / 400;
    cout << "Percentage of Total marks : " << percentage << "%" << endl;
    if(percentage >= 90 and percentage <= 100) {
        cout << "Grade A" << endl;
    } else if(percentage >= 80 && percentage < 90) {
        cout << "Grade B" << endl;
    } else if(percentage >= 70 && percentage < 80) {
        cout << "Grade C" << endl;
    } else if(percentage >= 60 && percentage < 70) {
        cout << "Grade D" << endl;
    } else if(percentage >= 50 && percentage < 60) {
        cout << "Grade E" << endl;
    } else {
        cout << "Grade F" << endl;
    }
}