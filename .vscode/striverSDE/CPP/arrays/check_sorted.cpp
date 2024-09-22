#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool checkSorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
          return false;
        }
      
    }
    return true;
}
int main(){
    int arr1[]={1,2,3,4,5};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    bool sorted=checkSorted(arr1,n);
    cout<<"is  array sorted ? "<<sorted;
    
    return 0;
}