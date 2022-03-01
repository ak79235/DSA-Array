// Checking if a number is armstrong number or not(Upto 3 digits)
#include <iostream>
using namespace std;
int main(){
    int n,sum=0,temp;
    cout<<"Enter any number:\n";
    cin>>n;
    temp=n;
    while(temp>0){
        int rem=temp%10;
        sum=sum + (rem*rem*rem);
        temp=temp/10;
    }
    if(sum==n){
        cout<<"It is an armstrong number!";
    }
    else{
        cout<<"It is not an armstrong number!";
    }
}