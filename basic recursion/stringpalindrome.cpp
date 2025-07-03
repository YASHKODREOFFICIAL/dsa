#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkPalindrome(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

int main()
{
    string s="ABCBA";
    bool res=checkPalindrome(s);
    if(res==true){
        cout<<"the string is palindrome"<<endl;
    }
    else{
        cout<<"the string is not palindrome"<<endl;
    }
    return 0;
}