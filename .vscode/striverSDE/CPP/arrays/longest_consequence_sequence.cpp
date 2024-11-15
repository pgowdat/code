
/*

#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); //size of array
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); //size of array
    int longest = 1;
    //pick a element and search for its
    //consecutive numbers:
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        //search for consecutive numbers
        //using linear search:
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

*/







/*

#include<iostream> 
#include<bits/stdc++.h>
using namespace std;



int longestSuccessiveElements(vector<int> a)
{
    int n=a.size();
    sort(a.begin(),a.end());
    int cnt = 0;
    int longest=1;
    int lastsmaller=INT_MIN;
    if(n==0)
    {
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]-1==lastsmaller)
        {
        cnt+=1;
        lastsmaller=a[i];
        }
        else if(a[i]!=lastsmaller)
        {
        cnt=1;
        lastsmaller=a[i];
        }
    longest=max(longest,cnt);
    }
    return longest;
}


int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> a)
{
    unordered_set<int> st;
    int n = a.size();
    int maxi = 1;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {

        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;

            while (st.find(x + 1) != st.end())
            {
                count += 1;
                x = x+1;
            }
            maxi = max(maxi, count);
        }
    }
    return maxi;
}
int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}
