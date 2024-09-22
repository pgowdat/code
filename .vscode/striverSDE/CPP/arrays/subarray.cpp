#include <iostream>
using namespace std;

int main() {
    int arr[] = {-3,-2,1, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int sum=10;
    int len=INT_MIN;
    int len1=INT_MIN;

    // Loop for starting point
    for (int start = 0; start < n; start++) {
        // Loop for ending point
        for (int end = start; end < n; end++) {

            // Print subarray
            int sum1=0;
            cout<<"{";
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
                sum1=sum1+arr[k];
                if(sum1==sum)
                {
                    len1=k-start+1;
                    
                }


            }
            cout<<"}";
            cout <<" , ";
            len=max(len1,len);
        }
    }
    cout<<"\nthe max length of subarray for given sum is "<<len;

    return 0;
}



/*
#include <iostream>
using namespace std;

int main() {
    int arr[] = {-3,-2,1, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int sum=10;
    int len=INT_MIN;
    int len1=INT_MIN;

    // Loop for starting point
    for (int start = 0; start < n; start++) {
        // Loop for ending point
        int sum1=0;
        cout<<"{";
        for (int end = start; end < n; end++) {
            
            // Print subarray

                cout << arr[end] << " ";
                sum1=sum1+arr[end];
                if(sum1==sum)
                {
                    len1=end-start+1;
                    
                }  

        }

            cout<<"}";
            cout <<" , ";
            len=max(len1,len);
    }
    cout<<"\nthe max length of subarray for given sum is "<<len;

    return 0;
}
*/

/*
#include<iostream>
using namespace std;
#include<bits/stdc++.h>


void printSubarray(vector<int>& arr1,int start,int end)
{
    if(end==arr1.size())
    {
        return;
    }    
    else if(start>end)
    {
        printSubarray(arr1,0,end+1);   
    }
    else
        {
            cout<<"{";
            for(int i=start;i<end;i++)
            {
              cout<<arr1[i]<<",";
            }
            cout<<arr1[end]<<"}";
            printSubarray(arr1,start+1,end);

        }   

        return;  
}
int main(){
    vector<int> arr1={1,2,3,4,5};
    printSubarray(arr1,0,0);
    return 0;
}

*/