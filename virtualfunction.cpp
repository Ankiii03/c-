#include<iostream>
using namespace std;
class base{
    public:
    virtual void fun(){
        cout<<"hello ,i am base class "<<endl;
    }
};
class derived :public base{
    void fun(){
        cout <<"hello ,i am derived class "<<endl;
    }
};
int main(){
    base*b=new derived;
    derived*d = dynamic_cast<derived*>(b);
    //bptr=&d;
   //bptr->fun();
   if(d!=0){
    cout<<"working dynamic casting by RTTI atleast one virtual function";
   }
   else{
    cout<<"not working";
   }

    return 0;
}