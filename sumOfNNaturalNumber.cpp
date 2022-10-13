#include<iostream>
using namespace std;
int add(int num){
    int sum;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int num;
    cin>>num;
    cout<<add(num);
}