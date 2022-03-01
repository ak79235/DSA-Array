// Palindromic pattern in pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0,k=i+1;j<n;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else{
                cout<<k;
                k--;
            }
        }
        for(int j=0,k=j+2;j<i;j++,k++){
            cout<<k;
        }
        cout<<endl;
    }
}