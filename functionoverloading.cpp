#include<stdio.h>
#include<iostream>
using namespace std;
class A{
    public:
    void fun()
{
    cout<<"function with no arguements "<<endl;

}
void fun(int x){
    cout<<"function with arguement:"<<endl;

}
void fun(double x){
    cout<<"Function with arguemnts double:"<<endl;
}
};
int main(){
    A obj;
    obj.fun();
    obj.fun(2);
    obj.fun(3.3);
    return 0;
}
