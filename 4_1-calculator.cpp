// WAP to write a simple calculator
#include <iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"What do you want to do with these numbers(+,-,*,/,%):"<<endl;
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;
    case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;
    case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;
    case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;
    case '%':
        cout<<a<<"%"<<b<<"="<<a%b;
        break;
    
    default:
        cout<<"Enter valid function!";
        break;
    }
    return 0;
}