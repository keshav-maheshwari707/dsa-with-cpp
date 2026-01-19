#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;
    vector<int> nums3;

    for(int i = 0; i < m; i++) {
        nums3.push_back(nums1[i]);
    }
    for(int i = 0; i < n; i++) {
        nums3.push_back(nums2[i]);
    }
    sort(nums3.begin(), nums3.end());
    for(int i : nums3) {
        cout << i << " ";
    }
}