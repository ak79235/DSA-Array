/*
Program for array rotation
Difficulty Level : Easy
 
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
 

Array
{1,2,3,4,5,6,7}

Rotation of the above array by 2 will make array
{3,4,5,6,7,1,2}

 

METHOD 2 (Rotate one by one)  

leftRotate(arr[], d, n)
start
  For i = 0 to i < d
    Left rotate all elements of arr[] by one
end
To rotate by one, store arr[0] in a temporary variable temp, move arr[1] to arr[0], arr[2] to arr[1] …and finally temp to arr[n-1]
Let us take the same example arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2 
Rotate arr[] by one 2 times 
We get [2, 3, 4, 5, 6, 7, 1] after first rotation and [ 3, 4, 5, 6, 7, 1, 2] after second rotation.
Below is the implementation of the above approach :

Time complexity : O(n * d) 
Auxiliary Space : O(1)

*/
#include<iostream>
using namespace std;

void rotate(int ar[],int d,int n)
{
    int temp;
    while (d!=0)
    {
        temp=ar[0];
        for (int i = 0; i < n-1; i++)
        {
            ar[i]=ar[i+1];
        }
        ar[n-1]=temp;
        d--;       
    }
}

int main()
{
    int size,rot;
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    int array[size]={};
    cout<<"Enter array:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"\nArray entered:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\nHow many elements do you want to rotate?"<<endl;
    cin>>rot;
    rotate(array,rot,size);
    cout<<"Updated array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}