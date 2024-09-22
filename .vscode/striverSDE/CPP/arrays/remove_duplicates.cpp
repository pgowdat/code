#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

/*
If you know the size of the array at compile time
int (&arr)[5]: This syntax means that arr is a reference to an array of 5 integers. The size must be known at compile time.

If the array size is not known at compile time (or varies), you should pass the array as a pointer along with its size:
int* &arr: This syntax means that arr is a reference to a pointer to an integer. The size of the array n is passed separately.

*/
int  removeDuplicate(int* arr,int n){
    set<int> s;
    for(int i=0;i<10;i++)
    {
        s.insert(arr[i]);
    }
    int k=s.size();
    int j=0;
    for(auto x: s){
        arr[j++]=x;
    }
    return j;
}



int main()
{
    int arr1[]={1,1,2,2,2,3,3,3,4,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int y=removeDuplicate(arr1,n);
    for(int i=0;i<y;i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}