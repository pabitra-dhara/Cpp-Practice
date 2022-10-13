#include<iostream>
using namespace  std;
int main(){
    cout<<"Enter Arrays Size:";
    int n;
    cin>>n;
    int arrays[n];

    //input array element
    cout<<"Enter Element for arrays:";
    for(int i=0;i<n;i++){
        cin>>arrays[i];
    }

    cout<<"Enter Searching Element:";
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arrays[i]==x){
            cout<<"Element found is index number:"<<i<<endl;
        }
    }


    return 0;
}