// Calculate factorial of a number
#include <iostream>
using namespace std;
int main(){
    int n,result=1;
    cout<<"Enter any number:\n";
    cin>>n;
    while(n>1){
        result*=n;
        n--;
    }
    cout<<"Factorial of the number="<<result;
}