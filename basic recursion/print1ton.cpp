#include<iostream>
using namespace std;

int print(int m,int n){
    if(m<=n){
        cout<<m<<" ";
        print(m+1,n);
    }
    else{

    cout<<"end";
    }
    return 0;
}
int main(){
    int n;
    cout<<"enter the number up to you want to print :";
    cin>>n;
    print(1,n);
    return 0;

}