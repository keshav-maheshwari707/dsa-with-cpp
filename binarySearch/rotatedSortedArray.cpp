#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid;
    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[start] <= arr[mid])
        { // left sorted
            if (arr[start] <= target && arr[mid] >= target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {  // right sorted
            if (arr[mid] <= target && arr[end] >= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = binarySearch(arr, target);
    cout << result;
}