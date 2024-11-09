
/*

#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int res=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int prod=1;
            for(int k=i;k<n;k++)
            {
                prod*=nums[k];
                res=max(prod,res);
            }
        }
    }
   return res;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int res=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        int prod=nums[i];
        for(int j=i+1;j<n;j++)
        {
                res=max(prod,res);
                prod*=nums[j];
                
            
        }
        res=max(prod,res);
    }
   return res;
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}
