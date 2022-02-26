// Program to find maximum, minimum among two numbers.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }
    else{
        cout<<b<<" is greater than "<<a;
    }
    return 0;
}