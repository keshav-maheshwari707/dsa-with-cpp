#include <iostream>
using namespace std;

int power(int b, int e)
{
    if (e == 0)
    {
        return 1;
    }
    else
    {
        return b * power(b, e - 1);
    }
}

int main()
{
    int number = 1;
    int rows;
    cout << "enter no. of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    int b, e;
    cout << "enter base : ";
    cin >> b;
    cout << "enter exponent : ";
    cin >> e;
    int result = power(b, e);
    cout << result;
    return 0;
}