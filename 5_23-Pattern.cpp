// Zig-zag pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0) || ((i%2==0)&&(j%4==0))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}