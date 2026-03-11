#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int start, int end)
{
    int i = start - 1;
    int pivot = arr[end];
    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;
    swap(arr[end], arr[i]);
    return i;
}

void quickSort(vector<int>& arr, int start, int end) 
{
    if (start < end) {
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex-1);
        quickSort(arr, pivotIndex+1, end);
    }
}

int main()
{
    vector<int> arr = {5, 2, 6, 4, 1, 3};
    int start = 0;
    int end = arr.size() - 1;
    quickSort(arr, start, end);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}