// Print hollow butterfly pattern
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j==n-i-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0;j<n;j++){
            if(j==i || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout<<endl;
    }
}