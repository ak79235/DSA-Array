// Program to check if a triangle is scalene, isosceles or equilateral
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three sides of triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b && a==c){
        cout<<"It is an equilateral triangle";
    }
    else if(a==b || a==c || b==c){
        cout<<"It is an isosceles triangle";
    }
    else{
        cout<<"It is an scalene triangle";
    }
    return 0;
}
