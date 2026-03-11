#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;   // left half ka start
    int j = mid + 1; // right half ka start
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + start] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);   // left half
        mergeSort(arr, mid + 1, end); // right half
        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    int start = 0;
    int end = arr.size() - 1;
    mergeSort(arr, start, end);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}