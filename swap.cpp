#include<iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cin>>a;
    cin>>b;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b :"<<b<<endl;
    int temp;
    temp =b;
    b=a;
   a=temp;
    cout<<"value ofa:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
    return 0;
}