
/*

#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            int s = 0;
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
    vector<int> a = { -1, 1, 1};
    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
*/


#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, int k,int &ansStart,int &ansEnd) {
    int n = a.size(); // size of the array.

    int len = INT_MIN;
    for (int i = 0; i < n; i++) { // starting index
        int s = 0;
        for (int j = i; j < n; j++) { // ending index
            // add the current element to
            // the subarray a[i...j-1]:
            s += a[j];

            if (s == k){

                if((j-i+1)>len)
                {
                    ansStart=i;
                    ansEnd=j;
                }
                len = max(len, j - i + 1);
               
            }
        }
    }
    return len;
}

int main()
{
    vector<int> a = { -1, -1, 1,-1,1};
    int k = 1;
    int ansStart,ansEnd;
    int len = getLongestSubarray(a, k,ansStart,ansEnd);
    cout<<"{";
    for(int i=ansStart;i<=ansEnd;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<"}"<<endl;
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}



/*
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        int rem = sum - k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //if sum is not there previously then only we update 
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> a = { 4,0,0,3};
    int k = 3;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}


*/