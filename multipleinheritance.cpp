#include<iostream>
using namespace std;
class A{
    public:
    void ambious(){
        cout<<"good to see an ambious person here"<<endl;
    }
};
class B{
    public:
    void consistency(){
    cout<<"consistency is very necessary aspect for any one here"<<endl;
    }
};
class C:public A,public B{
    public:
    void both(){
        cout<<"both ambious and consistence person are successful in their life nowadays"<<endl;
    }
};
int main(){
    C c1;
    c1.ambious();
    c1.consistency();
    c1.both();
    return 0;
}