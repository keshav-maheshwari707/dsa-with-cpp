#include<iostream>
#include<string>
using namespace std;
string removeAllOccurrences(string s, string part)
{
    while(s.length() > 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    cout << s;
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    removeAllOccurrences(s, part);
}