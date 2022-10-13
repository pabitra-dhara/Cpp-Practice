#include<iostream>
using namespace std;

int main(){
    int mx;
    int n;
    cout<<"Enter Array size:";
    cin>>n;
    cout<<"entre arrays element:";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    return 0;
}