#include<iostream>
using namespace std;
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int product = 1;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for(int i = 0; i < size; i++) {
        sum = sum + numbers[i];
        product = product * numbers[i];
    }
    int average = sum/size; 
    cout << "sum of all the array elements is " << sum << endl;
    cout << "average of all the array elements is " << average << endl;
    cout << "product of all the array elements is " << product << endl;
    return 0;
}