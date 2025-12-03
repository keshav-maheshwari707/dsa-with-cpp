#include<iostream>
using namespace std;
int main()
{

    // printing all subarrays of an array (brute force approach).
    // time complexity of this approach is - O(n^3). bcs of 3 for loops(nested).


    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int start = 0; start < arr[size]; start++) {
        for(int end = start; end < arr[size]; end++) {
            for(int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    int arr2[7] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT64_MIN;
    for(int start = 0; start < 7; start++) {
        int currSum = 0;
        for(int end = start; end < 7; end++) {
            currSum += arr2[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "maximum subarray sum is : " << maxSum;
}