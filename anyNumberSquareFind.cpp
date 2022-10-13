#include<iostream>
using namespace std;
int sqare(int num){
    int ans=num*num;
    return ans;
}
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    cout<<"Answer:"<<sqare(num)<<endl;
}