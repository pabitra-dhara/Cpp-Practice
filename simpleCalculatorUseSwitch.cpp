#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Two Number:";
    cin>>a>>b;
    char op;
    cout<<"Enter an oparetor";
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"Invalid Input";
        break;
    }
    return 0;
}