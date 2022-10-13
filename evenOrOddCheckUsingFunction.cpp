#include<iostream>
using namespace std;
void evenOrOdd(int num){
    if(num%2==0){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
    return;
}
int main(){
    int num;
    cout<<"Enter A Number:";
    cin>>num;
    evenOrOdd(num);
}