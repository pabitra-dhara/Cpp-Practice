#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arrays[n];
    //input arrays
    for(int i=0;i<n;i++){
        cin>>arrays[i];
    }

    //output arrays
    for(int i=0;i<n;i++){
        cout<<arrays[i];
    }
    return 0;
}