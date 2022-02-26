// WAP to print all prime numbers in a given range
#include <iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
            count++;
        }
    }
    cout<<"Total no of primes:"<<count;
    return 0;
}