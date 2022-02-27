// WAP to find whether an alphabet is a vowel or a consonant
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character:"<<endl;
    cin>>ch;
    ch=tolower(ch);
    switch(ch){
        case 'a':
            cout<<"It is a vowel";
            break;
        case 'e':
            cout<<"It is a vowel";
            break;
        case 'i':
            cout<<"It is a vowel";
            break;
        case 'o':
            cout<<"It is a vowel";
            break;
        case 'u':
            cout<<"It is a vowel";
            break;
        default:
            cout<<"It is a consonant";
            break;
    }
    return 0;
}