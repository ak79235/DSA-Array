// WAP to check if a given number is prime or not.
#include <iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"It is a prime number!";
    }
    else{
        cout<<"It is not a prime number!";
    }
    return 0;
}