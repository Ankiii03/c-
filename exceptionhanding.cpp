#include<iostream>
using namespace std;
int main(){
    double num,deno,divide;
    cout<<"deno"<<endl;
    cin>>deno;
    cout<<"num"<<endl;
    cin>>num;
    try{
        if(deno==0)
        throw 0;
        divide = num/deno;
        cout<<num<<"/"<<deno<<"="<<divide<<endl;
    }
    catch(int num_exception){
        cout<<"Error"<<num_exception<<endl;
    }
   return 0; 
}