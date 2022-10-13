#include<iostream>
 using namespace std;

 int main(){

     int n;
     cout<<"Enter a Number:";
     cin>>n;
     for (int i=1;i<=10;i++){
         int mul=i*n;
   cout<<n<<"x"<<i<<"="<<mul<<endl;         
     }
  
     return 0;
 }