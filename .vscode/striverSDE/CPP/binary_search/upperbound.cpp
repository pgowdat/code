
/*

#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            // upper bound found:
            return i;
        }
    }
    return n;
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << "\n";
    return 0;
}

*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int upper(vector<int>& arr,int low,int high,int x,int n)
{
    int ans=n;
    while(low <= high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}



int main() {
    vector<int> arr = {3,5,8,9,15,19};
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int x = 9;
    int upper_bound = upper(arr,low,high,x,n);
    cout<<"The upper bound is at index: "<<upper_bound<<endl;
    
    return 0;
}

