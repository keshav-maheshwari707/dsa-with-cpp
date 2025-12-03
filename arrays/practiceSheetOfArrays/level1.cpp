#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter " << n << " elements : ";
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "the array is : ";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "the sum of all the elements in array is : " << sum << endl;
    double average = (double)sum/n;
    cout << "the average of all the elements in array is : " << average;
}