
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// int sortarray(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }

int sortarray(vector<int> &arr)
{
    int max_element=arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>max_element)
        {
            max_element=arr[i];
        }
    }
    return max_element;
}

int main(){
    vector<int> arr1={1,2,33,23,21};
    vector<int> arr2={11,12,313,231,121};
    cout<<"the largest element of arr1 "<<sortarray(arr1)<<endl;
    cout<<"the largest element of arr2 "<<sortarray(arr2)<<endl;
    
    return 0;
}