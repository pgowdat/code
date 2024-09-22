

/*
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout<<"{"<<arr[0]<<","<<arr[1]<<","<<arr[2]<<"}";
    
    return 0;
}

*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int> nextGreaterPermutation(vector<int> &A)
{
  int index=-1;
   // Step 1: Find the break point:
  for(int i=A.size()-2;i>=0;i--)
  {
    if(A[i]<A[i+1])
    {
       index=i;
       break; 
    }
  }
  if(index==-1)
  {
    reverse(A.begin(),A.end());
    return A;
    
  }
  
    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:
  for(int j=A.size()-1;j>index;j--)
  {
    if(A[j]>A[index])
    {
        swap(A[j],A[index]);
        break;
    }
  }
  // Step 3: reverse the right half:
  reverse(A.begin() + index + 1, A.end());
  return A;
}



int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]";
    return 0;
}
