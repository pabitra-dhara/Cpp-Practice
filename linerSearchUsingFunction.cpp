#include<iostream>
using namespace std;
int linerSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter Array Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Searching Element:";
    int key;
    cin>>key;
    return 0;
}