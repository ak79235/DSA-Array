// Program to find sum of natural numbers till n
#include <iostream>
using namespace std;
int main(){
    int i=0,n,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Sum="<<sum;
    return 0;
}