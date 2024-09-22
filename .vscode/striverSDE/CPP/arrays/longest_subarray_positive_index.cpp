//brute force method 

/*

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

*/

//using 2 pointers
//using hash map

//optimal approach




#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a,long long k,int &ansStart,int &ansEnd)
{
 int n=a.size();
 int left=0,right=0;
 long long sum=a[0];
 int maxLen=0;

 while(right<n)
 {
    while(left < right && sum > k)
    {
        sum -= a[left];
        left++;
    }
    if(sum==k){
        if((right-left+1) > maxLen)
        {
         ansStart=left;
         ansEnd=right;
        }
        maxLen=max(maxLen, right - left + 1);
        
    }
    right++;
    sum += a[right];
    
 }
 return maxLen;
}



int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int ansStart,ansEnd=0;
    int len = getLongestSubarray(a, k , ansStart,ansEnd);
    cout<<"{";
    for(int i=ansStart;i<=ansEnd;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<"}"<<endl;
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}