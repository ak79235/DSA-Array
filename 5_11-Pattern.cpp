// Print 0-1 pattern. If sum of i'th and j'th element is even print 1, otherwise 0
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}
