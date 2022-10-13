#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0;//strat 
    int end=n;//ending value
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    cout<<"Enter array size:";
    int n;
    cin>>n;
    cout<<"Enter Array Element:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter your Searching Element:";
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
    return 0;
}