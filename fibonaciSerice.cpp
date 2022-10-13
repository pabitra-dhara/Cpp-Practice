#include<iostream>
using namespace std;
void fib(int num){
    int a=0;
    int temp=1;
    for(int i=1;i<=num;i++){
       cout<<a<<" ";
       cout<<temp<<" ";
       cout<<i<<" "; 
    }
}
int main(){
    int num;
    cin>>num;
    fib(num);
    return 0;
}