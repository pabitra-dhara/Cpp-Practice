#include<iostream>
using namespace std;
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    cout<<"Now A Value Is:"<<a<<endl;
    cout<<"Now B Value Is:"<<b<<endl;
    return;
}
int main(){
    int a;
    int b;
    cout<<"Enter A Value:";
    cin>>a;
    cout<<"Enter B Value:";
    cin>>b;
    swap(a,b);
}