#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Array Size:";
    cin>>n;
    int a[n];
    //input 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0;
    int e=n;
    cout<<"Enter Your Searching Number:";
    int key;
    cin>>key;
        for(int i=0;i<n;i++){

            int mid=(s+e)/2;

            if(a[mid]==key){
                cout<<"Number Find is Index Number:"<<i;
                break;
            }
            else if(a[mid]>key){
                mid-1;
                cout<<"Number Find is Index Number:"<<i;
                break;
            }
            else{
                s=mid+1;
                cout<<"Number of Index:"<<i;
            }
        }
        
        return 0;
    }
