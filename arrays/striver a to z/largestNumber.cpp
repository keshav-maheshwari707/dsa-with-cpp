// maximum size of an array inside main() function is - 10^6.
// maximum size of an array before or outside main() function (when declared globally) is - 10^7.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    cout << "the largest element is : " << largest;
}

// time complexity of this solution is - O(n). (much optimal than brute force approach).
// and the time complexity when we sort the array and return the last element (brute force approach for finding largest element) is - O(n log n).