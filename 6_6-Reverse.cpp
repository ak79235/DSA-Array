// Reversing a number(We need to remove the trailing zeroes. Ex- 100020 -> 20001)
#include <iostream>
using namespace std;
int main(){
    int n,result=0;
    cout<<"Enter any number:\n";
    cin>>n;
    while(n>0){
        int rem=n%10;
        result= (result*10) + rem;
        n=n/10;
    }
    cout<<"Reverse = "<<result;
}