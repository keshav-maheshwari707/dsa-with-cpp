#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        if(arr[start] + arr[end] == target) {
            return {start, end};
        }
        else if(arr[start] + arr[end] < target) {
            start++;
        }
        else {
            end--;
        }
    }
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> answer = twoSum(arr, target);
    for(int i : answer) {
        cout << i << " ";
    }
}