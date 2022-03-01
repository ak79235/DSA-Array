// Print inverted half pyramid using numbers-2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}