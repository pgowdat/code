#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int missingNo(vector<int>arr,int N)
// {
//     int hash[N+1]={0};
//     for(int i=0;i<N-1;i++)
//     {
//         hash[arr[i]]++;
//     }
//     for(int i=1;i<=N;i++)
//     {
//         if(hash[i]== 0)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int missingNo(vector<int>arr,int N)
// {
//  int sum1=((N*(N+1))/2);
//  int sum2=0;
//  for(int i=0;i<N-1;i++)
//  {
//     sum2+=arr[i];
//  }
//  int x=sum1-sum2;
//  return x;
// }

int missingNo(vector<int>arr,int N)
{
 int sum1=0;
 for(int i=1;i<=N;i++)
 {
    sum1^=i;
 }
 int sum2=0;
 for(int i=0;i<N-1;i++)
 {
    sum2^=arr[i];
 }
 int x=sum1^sum2;
 return x;
}

int main(){
    vector<int> arr={1,2,4,5};
    int N=arr.size()+1;
    int no = missingNo(arr,N);
    cout<<" the missing no is "<<no<<endl;
    
    return 0;
}