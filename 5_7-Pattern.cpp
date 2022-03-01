// Print inverted half pyramid using numbers
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}