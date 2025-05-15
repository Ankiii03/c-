#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if (age<=12)
    {
        cout<<"child"<<endl;
        }
        else if(age>=18)
        {
            cout<<"Adult"<<endl;
        }
        else
        {
            cout<<"teenAGER"<<endl;
        }
        return 0;
}
