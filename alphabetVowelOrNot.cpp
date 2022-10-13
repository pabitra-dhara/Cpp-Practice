#include<iostream>
using namespace std;
int main(){
    char cha;
    cout<<"Enter Any Alphabet:";
    cin>>cha;

    switch(cha){
        case 'a' & 'A':
        cout<<"vowel"<<endl;
        break;

        case 'e':
        cout<<"vowel"<<endl;
        break;

        case 'i':
        cout<<"vowel"<<endl;
        break;

        case 'o':
        cout<<"vowel"<<endl;
        break;

        case 'u':
        cout<<"vowel"<<endl;
        break;

        default:
        cout<<"consonant"<<endl;

    }
    return 0;
}