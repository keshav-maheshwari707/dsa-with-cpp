#include<iostream>
using namespace std;
int main() {
    int numbers[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    // cout << size;
    int min = numbers[0]; // let's assume this
    for(int i = 0; i < size; i++){
        if(numbers[i] < min) {
            min = numbers[i];
        }
    }
    cout << min;

    cout << endl;

    int max = numbers[0]; // let's assume this
    for(int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << max;
    return 0;
}