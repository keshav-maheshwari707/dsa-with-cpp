#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << endl;

    // time complexity is - O (n). (optimal approach). 

    int smallest = arr[0];
    int secondSmallest = INT32_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }
    cout << secondSmallest;
}