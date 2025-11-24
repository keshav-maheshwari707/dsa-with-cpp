#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number of elements ";
    cin >> n;
    int arr[n];
    cout << "enter " << n << " elements ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int index = 0;
    int minimum = arr[0];
    for(int i = 0; i < n; i++) {
        if(minimum > arr[i]) {
            minimum = arr[i];
            index = i;
        }
    }
    cout << "min. number is " << minimum << " and its index is " << index << endl;

    int maximum = arr[0];
    for(int i = 0; i < n; i++) {
        if(maximum < arr[i]) {
            maximum = arr[i];
            index = i;
        }
    }
    cout << "max. number is " << maximum << " and its index is " << index << endl;
}