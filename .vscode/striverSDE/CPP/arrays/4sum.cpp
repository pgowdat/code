#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
vector < vector<int>> fourSum(vector<int> nums, int target)
{
    int n = nums.size(); //size of the array
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[j];
                    if (sum == target)
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector < vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector < vector<int>> ans = fourSum(nums, target);
    cout << "the quadruplets  are: \n";
    for (auto it : ans)
    {
        cout << "[";
        for (auto ele : it)
        {
            cout <<ele<< " ";
        }
        cout << "]";
    }
    return 0;
}
*/
/*
vector < vector<int>> fourSum(vector<int> nums, int target)
{
    int n=nums.size();
    set<vector<int>> st;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          set<long long>hashset;
          for(int k=j+1;k<n;k++)
          {
            long long sum=nums[i]+nums[j];
            sum+=nums[k];
            long long x=target-sum;
            if(hashset.find(x)!=hashset.end())
            {
                vector<int> temp={nums[i],nums[j],nums[k],int(x)};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[k]);
          }  
          
        }
    }
vector<vector<int>> ans(st.begin(), st.end());
return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector < vector<int>> ans = fourSum(nums, target);
    cout << "the quadruplets  are: \n";
    for (auto it : ans)
    {
        cout << "[";
        for (auto ele : it)
        {
            cout <<ele<< " ";
        }
        cout << "]";
    }
    return 0;
}

*/



#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> quadruplets(int n, vector<int> &arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if ( i>0 && arr[i] == arr[i - 1]) continue;
        for(int j=i+1;j<n;j++)
        {
          if(j>i+1 && arr[j] == arr[j - 1])continue;

        //moving 2 pointers:
        int k = j + 1;
        int l = n - 1;
        while (k < l) {
            int sum = arr[i] + arr[j] + arr[k]+arr[l];
            if (sum < 0) {
                k++;
            }
            else if (sum > 0) {
                l--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k],arr[l]};
                ans.push_back(temp);
                k++;
                l--;
                //skip the duplicates:
                while (k < l && arr[k] == arr[k - 1]) k++;
                while (k < l && arr[l] == arr[l + 1]) l--;
            }
        }
        }
    }
    return ans;
}


int main()
{
    // vector<int> arr = { -1, 0, 1, 2, -1, -4,2,2,-1,-1};
    vector<int> arr = { -3,-3,-3,-3,-2,-2,-2,-2,-1,-1,0,0,6,6,6};
    int n = arr.size();
    vector<vector<int>> ans = quadruplets(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}

