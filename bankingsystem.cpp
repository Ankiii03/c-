#include<iostream>
using namespace std;
class bank{
    private:int acno;
    char name[30];
    long balance;
    public:
    void open account();
    {
        cout<<"Enter Account number:";
        cin>>acno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter balance:";
        cin>>Balance;
    }
    void show account()
    {
        cout<<"Account number:"<<acno<<endl;
        cout<<"Name:"<<name<<endl; 
        cout<<"Balance:"<<balance<<endl;
    }
    void deposit()
    {
        long amt;
        cout<<"Enter amt.you want to deposit:";
        cin>>amt;
        balance=Balance+amt;
    }
    void withdrawal()
    {
        long amt;
        cout<<"Enter amt u want to withdrawal";
        cin>>amt;
        if(amount<=balance)
        balance = balance-amt;
        else
        cout<<"less balance"<<endl;
    }
    int search (int);
    int bank::search(int a)
    {
        if(acno ==a)
        {
            show Account();
            return(1);
        }
        return(0);
    }
    int main()
    {
int found =0;a,ch,i;
for(i=0;i<=2;i++)
{
    C[i].open account();
}
do{
    cout<<"\n\n 1.display ALL \n 2:by account no\n 3.Deposit \n 4.withrawal \nS.exit"<<endl;
    cout<<"Please input your choice:";
    cin>>ch;
    switch(ch){
        case1:
        for(i=0;i<=2;i++){
            c[i]show account();
        }
        break;
        case2:
        cout<<"account number:";
        cin>>a;
        for(i=0;i<=2;i++){
            found =C[i].search(a);
            if(found)
            break;
        }
        if(!found)
        cout<<"Record not found "<<endl;
        break;
    }
}
    }


}