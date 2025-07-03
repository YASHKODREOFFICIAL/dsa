#include<iostream>
using namespace std;
int sum=0;
int sume(int m,int n){
    
    if(m<=n){
        sum= m+sum;
       sume(m+1,n);
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter thr number up to which you have to add :";
    cin>>n;
    int result=sume(1,n);
    cout<<"the sum of the numbers from 1 to "<<n<<" is :"<<result;
    return 0;
}