#include<iostream>
using namespace std;

class Solution {
    public:
    int revnum(int n){
        int rev=0;
        while(n>0){
            int r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        return rev;
    }

};
int main(){
    int n;
    cout <<"emter the number :";
    cin>>n;
    Solution s;
    int result=s.revnum(n);
    cout<<"the reversed number is :"<<result;
    return 0;
}