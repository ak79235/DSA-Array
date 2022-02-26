// Program to traverse an array
#include<iostream>
using namespace std;
int main(){
    int a[50];
    int i,size;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    cout<<"Enter array:"<<endl;
    for ( i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    cout<<"The array you enterd is :"<<endl;
    for ( i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }  
}