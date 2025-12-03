#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i < arr[size]; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "maximum element is : " << max << endl;
    cout << "maximum element's index is : " << maxIndex << endl;
    int min = arr[0];
    int minIndex = 0;
    for (int i = 0; i < arr[size]; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
    }
    cout << "minimum element is : " << min << endl;
    cout << "minimum element's index is : " << minIndex << endl;
    int countOfPositives = 0;
    int countOfNegatives = 0;
    int countOfZeroes = 0;
    for(int i = 0; i < arr[size]; i++) {
        if(arr[i] > 0) {
            countOfPositives++;
        }
        else if(arr[i] < 0) {
            countOfNegatives++;
        }
        else{
            countOfZeroes++;
        }
    }
    cout << "number of positives are : " << countOfPositives << endl;
    cout << "number of negatives are : " << countOfNegatives << endl;
    cout << "number of zeroes are : " << countOfZeroes << endl;
    int countOfEvenNumbers = 0;
    int countOfOddNumbers = 0;
    for(int i = 0; i < arr[size]; i++) {
        if(arr[i] % 2 == 0) {
            countOfEvenNumbers++;
        }
        else{
            countOfOddNumbers++;
        }
    }
    cout << "number of even numbers : " << countOfEvenNumbers << endl;
    cout << "number of odd numbers : " << countOfOddNumbers << endl;

    int k;
    cout << "enter a value : ";
    cin >> k;
    cout << "elements greater than " << k << " are : ";
    for(int i = 0; i < arr[size]; i++) {
        if(arr[i] > k) {
            cout << arr[i] << " ";
        }
    }
}