#include<iostream>
using namespace std;
class University{
public:
void Academicdepartment(){
    cout<<"college of Engineering"<<endl;
}
};
class Engineering :public University{
    public:
    void engineeringtype(){
        cout<<"Department of Computer science Engneering"<<endl;
    }
};
class Student:public Engineering{
    public :
    void details(){
        cout<<"first year"<<endl;
    }
};
int main(){
    Student S;
    S.Academicdepartment();
    S.engineeringtype();
    S.details();
    return 0;
}