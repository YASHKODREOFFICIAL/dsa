#include<iostream>
using namespace std;

class Solution{
    public:
    int print(int n){
        for(int i=0;i<=n;i++){
            cout<<i<<" ";

        }
    }
};


int main(){
    int n;
    cout<<"enter the number untill you want to print :";
    cin>>n;
    Solution s;
    s.print(n);
    return 0;
}