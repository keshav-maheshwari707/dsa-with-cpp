#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    // d = 3 (left rotating this array by 3 places.) -> {4, 5, 6, 7, 1, 2, 3}.
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    } // temp = {1, 2, 3}.
    for (int i = d; i < arr.size(); i++)
    {
        arr[i - d] = arr[i];
    } // arr = {4, 5, 6, 7}.
    for (int i = arr.size() - d; i < arr.size(); i++)
    {
        arr[i] = temp[i - (arr.size() - d)];
    }
    for (int i : arr)
    {   
        cout << i << " ";
    }
}