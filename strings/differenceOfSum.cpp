#include<iostream>
using namespace std;
int differenceOfSum(int n, int m)
{
    int divisibleSum = 0;
    int notDivisibleSum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % m == 0) {
            divisibleSum += i;
        }
        else {
            notDivisibleSum += i;
        }
    }
    return notDivisibleSum - divisibleSum;
}
int main()
{
    int result = differenceOfSum(30, 6);
    cout << result;
}