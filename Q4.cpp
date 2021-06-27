/*
Program for array rotation
Difficulty Level : Easy
 
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
 

Array
{1,2,3,4,5,6,7}

Rotation of the above array by 2 will make array
{3,4,5,6,7,1,2}

 

Method 4 (The Reversal Algorithm) :
Algorithm : 
 

rotate(arr[], d, n)
  reverse(arr[], 1, d) ;
  reverse(arr[], d + 1, n);
  reverse(arr[], 1, n);
Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. The idea of the algorithm is : 
 

Reverse A to get ArB, where Ar is reverse of A.
Reverse B to get ArBr, where Br is reverse of B.
Reverse all to get (ArBr) r = BA.
Example : 
Let the array be arr[] = [1, 2, 3, 4, 5, 6, 7], d =2 and n = 7 
A = [1, 2] and B = [3, 4, 5, 6, 7] 
 

Reverse A, we get ArB = [2, 1, 3, 4, 5, 6, 7]
Reverse B, we get ArBr = [2, 1, 7, 6, 5, 4, 3]
Reverse all, we get (ArBr)r = [3, 4, 5, 6, 7, 1, 2]

Time complexity : O(n) 

*/
#include<iostream>
using namespace std;

void reverse(int arr[],int start,int end)
{    
    for (int i = start,j=end; i <=end/2; i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }    
}

void rotate(int ar[],int d,int n)
{
    reverse(ar,0,d-1);
    reverse(ar,d,n-1);
    reverse(ar,0,n-1);
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