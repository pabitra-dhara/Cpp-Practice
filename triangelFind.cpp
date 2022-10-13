#include<iostream>
using namespace std;
int main(){
int sidea,sideb,sidec;
cout<<"Enter Three Side Value:";
cin>>sidea>>sideb>>sidec;
if(sidea==sideb && sideb==sidec){
    cout<<"This is an equilateral triangle.";
}
else if(sidea==sideb || sidea==sidec || sideb==sidec){
    cout<<"This is an isoscalene triangle";
}
else{
    cout<<"This is an scalene triangle";
}
return 0;
}