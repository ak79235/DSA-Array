/*
Program for array rotation
Difficulty Level : Easy
 
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
 

Array
{1,2,3,4,5,6,7}

Rotation of the above array by 2 will make array
{3,4,5,6,7,1,2}

 

METHOD 1 (Using temp array) 

Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
1) Store the first d elements in a temp array
   temp[] = [1, 2]
2) Shift rest of the arr[]
   arr[] = [3, 4, 5, 6, 7, 6, 7]
3) Store back the d elements
   arr[] = [3, 4, 5, 6, 7, 1, 2]

Time complexity : O(n) 
Auxiliary Space : O(d)

*/
#include<iostream>
using namespace std;

void rotate(int arr[], int rot, int size)
{
    int temp[rot]={};
    for(int i=0;i<rot;i++)
        temp[i]=arr[i];
    for(int i=0;i<size-rot;i++)
        arr[i]=arr[i+rot];
    for(int i=0;i<rot;i++)
        arr[i+size-rot]=temp[i];
}

int main() {
    int size_of_array=0, d=0;
    cout << "Enter size of array:" << endl;
    cin>>size_of_array;
    int array[size_of_array];
    cout << "Enter array:"<<endl;
    for(int i=0;i<size_of_array;i++)
        cin>>array[i];
    for(int i=0;i<size_of_array;i++)
        cout<<array[i]<<" ";
    cout<<"\nHow many elements do you want to rotate?"<<endl;
    cin>>d;
    rotate(array,d,size_of_array);
    cout<<"Updated array:"<<endl;
    for(int i=0;i<size_of_array;i++)
        cout<<array[i]<<" ";
    return 0;
}