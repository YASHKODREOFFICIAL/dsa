#include<iostream>
using namespace std;

class Solution{
    public:
     int isPrime(int n){
        for(int i=2;i<=n/2;i++){
            if(n%i==0 && i!=n){
                cout<<"the number is not prime "<<endl;
                return 0;
            }
            else{
                cout<<"the number is prime "<<endl;
                return 0;   
            }
        }
     }
    };
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    Solution s;
    s.isPrime(n);
    return 0;
}