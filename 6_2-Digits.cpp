// Printing all the digits of a positive decimal number from right to left(Reverse of a number)
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    while(n>0){
        int rem = n%10;
        cout<<rem;
        n=n/10;
    }
}