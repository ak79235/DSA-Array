// WAP to add 2 numbers using function
#include <iostream>
using namespace std;
int sum(int x,int y){
    return x+y;
}
int main(){
    int a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    cout<<sum(a,b);
}