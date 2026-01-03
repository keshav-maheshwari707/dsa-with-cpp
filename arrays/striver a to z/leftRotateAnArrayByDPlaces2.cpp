#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int d = 3;
    // {4, 5, 6, 7, 1, 2, 3}. - rotated resultant array.
    // {1, 2, 3} - reverse this -> {3, 2, 1}.
    int start = 0;
    int end = d - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    } // {3, 2, 1}.
    int secondStart = d;
    int secondEnd = n - 1;
    while (secondStart < secondEnd)
    {
        swap(arr[secondStart], arr[secondEnd]);
        secondStart++;
        secondEnd--;
    } // {7, 6, 5, 4}.
    int thirdStart = 0;
    int thirdEnd = n - 1;
    while (thirdStart < thirdEnd)
    {
        swap(arr[thirdStart], arr[thirdEnd]);
        thirdStart++;
        thirdEnd--;
    } // {4, 5, 6, 7, 1, 2, 3}.
    for (int i : arr)
    {
        cout << i << " ";
    }
}