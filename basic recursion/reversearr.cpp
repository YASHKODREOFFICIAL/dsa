#include<iostream>
using namespace std;

int reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n=5;
    int arr[]={1, 2, 3, 4, 5};
    cout<<"the actual array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n thr reverse array is :"<<endl;
    reverse(arr,n);
    return 0;
}