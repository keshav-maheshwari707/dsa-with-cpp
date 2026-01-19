#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int n = arr.size();
    int count = n / 2;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > n/2) {
            return 
        }
    }
}