#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// vector<int> find_union(int arr1[],int arr2[],int n,int m)
// {
//     vector<int>Union;
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp[arr1[i]]++;
//     }
//     for(int j=0;j<m;j++){
//         mp[arr2[j]]++;
//     }

//     for(auto it: mp)
//     {
//         Union.push_back(it.first);
//     }
//     return Union;
// }

// vector<int> find_union(int arr1[],int arr2[],int n,int m)
// {
//     vector<int>Union;
//     set<int>s;
//     for(int i=0;i<n;i++){
//         s.insert(arr1[i]);
//     }
//     for(int i=0;i<m;i++){
//         s.insert(arr2[i]);
//     }
//     for(auto it: s)
//     {
//         Union.push_back(it);
//     }
//     return Union;
// }
vector < int > find_union(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0; // pointers
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}
int main(){
    int arr1[]={1,2,2,2,3,3,3,4,6};
    int arr2[]={1,2,3,4,5,5,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> unionn = find_union(arr1,arr2,n,m);
    for(vector<int>::iterator it=unionn.begin();it!=unionn.end();it++)
    {
     cout<<*it<<" ";
    }

    return 0;
}