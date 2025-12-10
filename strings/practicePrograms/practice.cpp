#include<iostream>
#include<string>
using namespace std;
int findLength(string s)
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return count;
}

string reverseString(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}

bool isPalindrome(string s) 
{
    int start = 0;
    int end = s.length() - 1;
    while(start < end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int countWords(string s)
{
    int countWhiteSpaces = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' '){
            countWhiteSpaces++;
        }
    }
    return countWhiteSpaces + 1;
}

string changeCase(string s)
{
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = toupper(s[i]);
        }
        else {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

bool compareStringS(string a, string b)
{
    if(a.length() != b.length()) {
        return false;
    }
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

string concatenateStrings(string a, string b)
{
    string result = a;
    for(int i = 0; i < b.length(); i++) {
        result += b[i];
    }
    return result;
}

int main()
{
    string str1 = "keshav";
    string result = reverseString(str1);
    cout << result << endl;
    int len = findLength(str1);
    cout << len << endl;
    // cout << "enter any string : ";
    // string str2;
    // getline(cin, str2);
    // int result2 = countWords(str2);
    // cout << "number of words are : " << result2; 
    string str3 = "abcbad";
    bool result3 = isPalindrome(str3);
    cout << result3 << endl;
    string str4 = "kEsHaV";
    string result4 = changeCase(str4);
    cout << result4 << endl;
    string str5 = "abcdef";
    string str6 = "abcdef";
    bool result5 = compareStringS(str5, str6);
    cout << result5 << endl;
    string result6 = concatenateStrings(str5, str6);
    cout << result6;
}