#include<iostream>
using namespace std;
int main(){
    int n=3;
    int m=9;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(((i+j)%4==0) || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}