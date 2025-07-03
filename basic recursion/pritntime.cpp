#include<iostream>
using namespace std;

int print(int m,int n){
    if(m>n){
    
        return 0;
    }
        cout<<"my name is yash!!"<<endl;
    print(m+1,n);
}
int main(){
    int n;
    int m=1;
    cout<<"enter the number of  times you want to print :";
    cin>>n;
    print(m,n);
    return 0;
}