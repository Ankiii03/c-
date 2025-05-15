#include<iostream>
using namespace std;
class Shape{
    public:
    string name;
    int sides;
    Shape(string name,int sides){
        this->name=name;
        this->sides=sides;
    }
};
class triangle:public Shape{
    private:
    int base;
    int height;
    public:
    triangle (string name,int sides,int base,int height):Shape(name,sides){
        this->base=base;
        this->height= height;
    }
    void area(){
        cout<<"area of triangle:"<<(0.5*height*base)<<endl;
    }
    void details(){
        cout<<"shape is"<<name<<endl;
        cout<<"no.of side"<<sides<<endl;
        cout<<"base is "<<base<<endl;
        cout<<"height is"<<height<<endl;

    }
};

class square :public Shape{
    private :
    int height;
    public :
    square(string name,int sides,int height ):Shape(name,sides){
        this-> height = height ;

    }
    void area(){
        cout<<"area of sqare is"<<(height*height)<<endl;
    }
    void details(){
        cout<<"shape is "<<name<<endl;
        cout<<"no.of sides are"<<sides<<endl;
        cout<<"height"<<height<<endl;
    }
};
int main(){
    triangle t("triangle ",3,2,3);
    square s("square",4,2);
    t.details();
    cout<<endl<<endl;
    s.details();
    return 0;
}