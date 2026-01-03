#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[s], arr[i]);
            s++;
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}