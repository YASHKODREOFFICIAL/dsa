#include<iostream>
using namespace std;

int fa=1;
int fact(int m,int n){
    if(m<=n){
        fa=fa*m;
        fact(m+1,n);
    }
    else{
        cout<<"the factorial of the number "<<n<<" is :"<<fa<<endl;
        return 0;
    }
}
int main(){
    int n;
    cout<<"enter thr number which you want to find factorial :";
    cin>>n;
    fact(1,n);
    return 0;

}