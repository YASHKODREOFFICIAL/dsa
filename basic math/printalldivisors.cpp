#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iterator>
using namespace std;

class Solution {
    public:
    vector<int>ls;
    int printAllDivisors(int n){
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                ls.push_back(i);
                if(i!=n/i){
                    ls.push_back(n/i);
                }
            } 
        }
        sort(ls.begin(), ls.end());
        for(auto i:ls){
            cout<<i<<" ";
        }
    }
};
int main(){
    int n;
    cout<<"enter thr number :";
    cin>>n;
    Solution s;
    s.printAllDivisors(n);

}