#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string str1 = "hello world";
    cout << str1.length() << endl;
    cout << str1.front() << " " << str1.back() << endl;
    string str2;
    cout << "enter a string in lowercase : ";
    getline(cin, str2);
    for(int i = 0; i < str2.length(); i++) {
        str2[i] = toupper(str2[i]);
    }
    cout << str2 << endl;
    string str3;
    cout << "enter a string in uppercase : ";
    getline(cin, str3);
    for(int i = 0; i < str3.length(); i++) {
        str3[i] = tolower(str3[i]);
    }
    cout << str3 << endl;
}