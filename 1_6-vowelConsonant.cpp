// Program to check if an alphabet is a vowel or a consonant
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character:"<<endl;
    cin>>ch;
    ch=toupper(ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"The entered character is a vowel";
    }
    else{
        cout<<"The entered character is a consonant";
    }
    return 0;
}