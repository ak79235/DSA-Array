/*
Program for array rotation
Difficulty Level : Easy
 
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. 
 

Array
{1,2,3,4,5,6,7}

Rotation of the above array by 2 will make array
{3,4,5,6,7,1,2}

 

METHOD 3 (A Juggling Algorithm) 
This is an extension of method 2. Instead of moving one by one, divide the array in different sets 
where number of sets is equal to GCD of n and d and move the elements within sets. 
If GCD is 1 as is for the above example array (n = 7 and d =2), then elements will be moved within one set only, we just start with temp = arr[0] and keep moving arr[I+d] to arr[I] and finally store temp at the right place.
Here is an example for n =12 and d = 3. GCD is 3 and 
 

Let arr[] be {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}

a) Elements are first moved in first set – (See below 
   diagram for this movement)
   arr[] after this step --> {4 2 3 7 5 6 10 8 9 1 11 12}

b)    Then in second set.
          arr[] after this step --> {4 5 3 7 8 6 10 11 9 1 2 12}

c)    Finally in third set.
          arr[] after this step --> {4 5 6 7 8 9 10 11 12 1 2 3}

Time complexity : O(n) 
Auxiliary Space : O(1)

*/
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
/*Function to left rotate arr[] of siz n by d*/
void rotate(int arr[], int d, int n)
{
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
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