#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        if(!isalnum(s[start])) {
            start++;
            continue;
        }
        if(!isalnum(s[end])) {
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])) {
            cout << "no palindrome";
            return false;
        }
        start++;
        end--;
    }
    cout << "palindrome";
    return true;
}
int main()
{
    string str = "Ac3?e3c&a";
    isPalindrome(str);
}