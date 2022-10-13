#include<iostream>
using namespace std;
void npo(int num){
    if(num<0){
        cout<<"negative";
    }
    else if(num>0){
        cout<<"possative";
    }
    else if(num==0){
        cout<<"zero";
    }
    else{
        cout<<"invaled input";
    }
    return;
}
int main(){
    int num;
    cin>>num;
    npo(num);
}