//addition, multiplication, substraction, division using constructor..........//
#include<iostream>
using namespace std;
class construct
{
    public:
          int num1,num2;
          construct()
          {
            cout<<"enter the value of first number: ";
            cin>>num1;
            cout<<" enter the value of second number: ";
            cin>>num2;
          }
          void showdata()
          {
            cout<<"addition= "<<num1+num2<<endl;
            cout<<"substraction= "<<num1-num2<<endl;
            cout<<"multiplication= "<<num1*num2<<endl;
            cout<<"division= "<<num1/num2<<endl; 
          }       
};
int main()
{
    construct con;
    con.showdata();
    return 0;
}