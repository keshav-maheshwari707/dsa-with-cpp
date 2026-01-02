#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }   
    }
    return true;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 4};
    bool ans = isSorted(arr);
    cout << ans;
}