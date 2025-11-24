#include<iostream>
using namespace std;
int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 80;
    int index = 0;
    for(int i = 0; i < 7; i++) {
        if(arr[i] == target) {
            index = i;
            cout << "yes target element is present in the array at index " << index;
        }
    }
}