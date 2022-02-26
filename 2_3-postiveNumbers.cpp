// Program to add only positive numbers
// Program should take input as long as positive numbers are entered, once a negative number
// is entered, the program should stop taking inputs and display the sum of entered values 
// till then(only positive values)
#include <iostream>
using namespace std;
int main(){
    int n=0,sum=0;
    do
    {
        sum+=n;
        cout<<"Enter any number:(-ve number to stop taking inputs):"<<endl;
        cin>>n;
    } while (n>0);
    cout<<"Sum="<<sum;
    return 0;
}