// Print Pascal's triangle
#include <iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<" ";
            }
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==0){
                count=1;
            }
            else{
                count=count*(i-j+1)/j;
            }
            cout<<count<<" ";
        }
        cout<<endl;
    }
}