
/*

#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int  buyAndsell(vector<int> a,int &ansBuy,int &ansSell)
{
    int maxi = INT_MIN;
    vector<int>ans;

    for(int i=0;i<a.size();i++)
    {
        int profit=0;
       for(int j=i;j<a.size();j++)
       {
        profit=a[j]-a[i];
        if(profit > maxi)
        {
         ansBuy=i;
         ansSell=j;
        }
        maxi=max(maxi,profit);

       } 
    }
     ans.push_back(ansBuy);
     ans.push_back(ansSell);
     return maxi;

}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int ansBuy,ansSell=0;
    int x=buyAndsell(a,ansBuy,ansSell);
    cout<<" the profit made is "<<x<<endl;
    cout <<"the stock is bought on DAY-"<<ansBuy+1<<" and "<<"sold on DAY-"<<ansSell+1<<endl;
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}


