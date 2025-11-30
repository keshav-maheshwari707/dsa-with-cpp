#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr1, int target)
{
    int start = 0;
    int end = arr1.size() - 1;
    int mid;
    while(start <= end) {
        mid = (start+end)/2;
        if(target > arr1[mid]) {
            start = mid+1;
        }
        else if(target < arr1[mid]) {
            end = mid-1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};    //odd
    int target1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};    //even
    int target2 = 0;  
    
    int result = binarySearch(arr2, target2);
    cout << result;
}