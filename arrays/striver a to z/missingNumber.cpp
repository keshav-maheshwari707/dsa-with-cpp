#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {3, 0, 1};
    int n = arr.size();
    int sumOfN = 0;
    for (int i = 0; i <= n; i++)
    {
        sumOfN += i;
    }
    int secondSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        secondSum += arr[i];
    }
    int answer = sumOfN - secondSum;
    cout << "missing number is " << answer;
}