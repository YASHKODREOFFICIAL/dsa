#include<iostream>
using namespace std;

class Solution{
    public:
    bool isPalindrome(int n){
        int s=n;
        int rev=0;
        while(n>0){
            int r=n%10;
            rev=rev*10+r;
            n=n/10;
            
        }
        return rev==s;
    }
};
int main(){
    int n;
    cout<<"enter the number to check it palindrome or not :";
    cin>>n;
    Solution s;
    if(s.isPalindrome(n)){
        cout<<"the number is palindrome"<<endl;
    }
    else{
        cout<<"the number is not palindrome"<<endl;
    }
}