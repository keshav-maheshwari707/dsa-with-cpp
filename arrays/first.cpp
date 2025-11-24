#include<iostream>
using namespace std;
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    // cout << numbers[0] << endl;
    // cout << numbers[4];

    int size = sizeof(numbers)/sizeof(numbers[0]);  // size = length of the array.
    cout << size << endl;
    
    for(int i : numbers) {
        cout << i << " ";
    }

    cout << endl;

    int marks[5];
    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
    for(int i : marks) {
        cout << i << " ";
    }
    return 0;
}