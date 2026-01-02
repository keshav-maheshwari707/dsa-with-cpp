#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 4, 2, 1, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n); // O (n log n)
    int largest = arr[n - 1];
    int secondLargest;
    for (int i = n - 2; i >= 0; i--) // O (n) - worst case
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }
    // cout << secondLargest;
}

// time complexity - n log n + n. (brute force approach).