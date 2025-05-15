#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks>33){
        cout<<"pass"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    //agr ternary operator kausehum kre tho
    marks>33 ? cout<<"pass"<<endl:cout<<"fail"<<endl;
    return 0;
}

