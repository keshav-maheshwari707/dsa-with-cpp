#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 3};
    int start = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[start])
        {
            arr[start + 1] = arr[i];
            start++;
        }
    }
    return (start + 1);
}