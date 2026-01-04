#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int maximum = 0;
    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 1) {
            count++;
            maximum = max(maximum, count);
        }
        else if(arr[i] == 0) {
            count = 0;
        }
    }
    cout << maximum;
}