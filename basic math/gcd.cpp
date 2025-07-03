#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int findGCD(int a,int b){
        int gcd=1;
        for(int i=1;i<=min(a,b);i++){
            if(a%i==0 && b%i==0){
                gcd= i;
            }
        }
        return gcd;
    }
};
int main(){
    int a,b;
    cout<<"enter the two numbers to fid gcd :";
    cin>>a>>b;
    Solution s;
    int result=s.findGCD(a,b);
    cout<<"the gcd pf two numbers is :"<<result;
    return 0;
}