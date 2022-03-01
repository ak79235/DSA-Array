// Print first n terms of fibonacci series
#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"Enter number of terms:";
    cin>>n;
    if(n==1){
        cout<<a;
    }
    else if(n==2){
        cout<<a<<","<<b;
    }
    else{
        cout<<a<<","<<b;
        for(int i=3;i<=n;i++){
            c=a+b;
            cout<<","<<c;
            a=b;
            b=c;
        }
    }
}