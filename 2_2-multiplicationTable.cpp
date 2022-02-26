// Program to display multiplication table upto 10
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for(i=1;i<11;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}