#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    int largest = arr[0];
    for (int i = 0; i < arr.size(); i++) // O (n)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "largest element is : " << largest << endl;
    int secondLargest = -1;
    for (int i = 0; i < arr.size(); i++) // O (n)
    {
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "second largest element is : " << secondLargest;
}

// time complexity - O (2n). (better approach).