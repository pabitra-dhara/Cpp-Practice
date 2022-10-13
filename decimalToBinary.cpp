#include<iostream>
using namespace std;
int decToBin(int num){
    int store,rem,bin=0,i=1;
    store=num;
    while(num!=0){
        rem=num%2;
        num=num/2;
        bin=bin+(rem*i);
        i=i*10;
    }
    return bin;
}
int main(){
    int num;
    cout<<"Enter Any Decimal Number:";
    cin>>num;
    cout<<decToBin(num);

}
// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//  int no, store, rem, bin=0,i=1;

 
//  printf("Enter the num\n");
//  scanf("%lld",&no);
 
//  store = no;
 
//  while(no!=0)
//  {
//   rem = no%2;
//   no = no/2;
//   bin = bin + (rem * i);
//   i = i*10; 
//  }
 
//  printf("Binary no of %lld is \t%lld ",store,bin);
 
//  return 0;
// }