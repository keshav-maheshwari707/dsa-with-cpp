#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n;
        return;
    }
    cout << n << " ";
    print(n - 1);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int sum(int n) 
{ 
    if(n == 0) {
        return 0;
    }
    return n + sum(n-1);
}

int main()
{
    int a = 4;
    // print(n);
    int ans = factorial(a);
    // cout << ans;
    int addition = sum(4);
    cout << addition;
}