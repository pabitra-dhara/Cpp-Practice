#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter Any Alphabet:";
    cin>>c;

    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' ||c=='u' || c=='U'){
        cout<<c<<" Is Vowel";
    }
    else{
        cout<<c<<" Is Consonant";
    }
    return 0;
}