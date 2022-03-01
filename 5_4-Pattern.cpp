// Print an inverted half pyramid
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=5;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}