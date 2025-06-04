<<<<<<< HEAD
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
=======

#include<iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    // Input the operation to perform
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation based on user input
    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

>>>>>>> 7b0d6c13fe443134e8d333715f5c8f29f8ba8f00
