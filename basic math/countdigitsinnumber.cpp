#include <iostream>
using namespace std;

class Solution{
    public:
    int countDigits(int n){
        int count=0;
        while(n>0){
            n=n/10;
            count++;
        }
        return count;
    }
};

int main(){

    int n;
    cout<<"enter the number to count digits:";
    cin>>n;
    Solution s;
    int result=s.countDigits(n);
    cout<<"the number of the digits in the numbeer is :"<<result<<endl;
    return 0;
}