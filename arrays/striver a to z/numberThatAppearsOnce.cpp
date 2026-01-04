#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = arr[i] ^ xorr;
    }
    cout << xorr;
}