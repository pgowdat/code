#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int continousones(vector<int>arr,int N)
{
    int j=0;int count=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==1)
        {
            j++;
            if(j>count)
            {
                count=j;
            }
        }
        else
        {
            j=0;
        }

    }
    return count;
}
int main(){
    vector<int> arr={1,2,3,1,1,4,5,1,1,1,1,1,1,7};
    int N=arr.size();
    int cnt=continousones(arr,N);
    cout<<"the no of continous  ones is "<<cnt<<endl;
    return 0;
}