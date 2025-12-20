#include <iostream>
#include <algorithm>
using namespace std;
bool isAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }
    for(int i = 0; i < s1.length(); i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str1 = "listen";
    string str2 = "sileNT";
    bool result = isAnagram(str1, str2);
    cout << result;
}