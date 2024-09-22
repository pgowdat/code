#include<iostream>
using namespace std;

void left_rotate(int* arr, int n, int d) {
    int p = 1;
    while(p <= d) {
        int temp = arr[0];
        for(int i = 1; i < n; i++) {
            arr[i-1] = arr[i];
        }
        arr[n-1] = temp;
        p++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 2, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int d = 3;
    left_rotate(arr1, n, d);
    for(int j = 0; j < n; j++) {
        cout << arr1[j] << " ";
    }
    return 0;
}
