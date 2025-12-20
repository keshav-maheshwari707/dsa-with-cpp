#include <iostream>
using namespace std;
void isEvenOrOdd(int n)
{
    // EFFICIENT APPROACH
    if ((n & 1) == 0)
    {
        cout << n << " is an even number." << endl;
    }
    else
    {
        cout << n << " is an odd number." << endl;
    }
}
int main()
{
    // NAIVE APPROACH
    int n;
    cout << "enter a number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " is a even number." << endl;
    }
    else
    {
        cout << n << " is a odd number." << endl;
    }

    isEvenOrOdd(34);
}