// Print Floyd's triangle
#include <iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}