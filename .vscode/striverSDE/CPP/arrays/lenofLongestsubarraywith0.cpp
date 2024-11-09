#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a)
{
    int sum=0;
    int n=a.size();
    int maxLen=INT_MIN;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
        {
            int maxLen=i+1;
        }
        else if(mp.find(sum)!=mp.end())
        {
           maxLen=max(maxLen,i-mp[sum]);
        }
        else
        {
          mp[sum]=i;
        }
        
    }
    return maxLen;
    
}


int main() {
    vector<int> a = {9, -3, 3, -1, 6, -5};
    cout << solve(a) << endl;

    return 0;
}
