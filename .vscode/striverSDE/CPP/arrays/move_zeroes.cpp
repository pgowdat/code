// #include<iostream>
// using namespace std;

// void move_zeroes(int* arr, int n) {
//     int arr2[n];int j=0;
//     for(int i=0; i < n; i++) {
          
//           if(arr[i]!=0)
//           {
//             arr2[j++]=arr[i];
//           }
          
//     }
//     for(int k=j;k<n;k++)
//     {
//         arr2[j++]=0;
//     }  
//     for(int m=0;m<n;m++)
//     {
//         arr[m]=arr2[m];
//     }    
  
  

// }

// int main() {
//     int arr1[] = {1,0,5,0,0,2,4};
//     int n = sizeof(arr1) / sizeof(arr1[0]);
//     move_zeroes(arr1, n);
//     for(int l = 0; l < n; l++) {
//         cout << arr1[l] << " ";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}


int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}

