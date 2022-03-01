// Find square root of a given number using function
#include <iostream>
#include <math.h>
using namespace std;
double squareroot(double x){
    return sqrt(x);
}
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    cout<<squareroot(n);
} 