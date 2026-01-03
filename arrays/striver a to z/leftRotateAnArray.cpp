// left rotate an array by one place.
// original array - {1, 2, 3, 4, 5}
// left rotated array by one place - {2, 3, 4, 5, 1}.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    for (int i : arr)
    {
        cout << i << " ";
    }
}

// time complexity - O (n).