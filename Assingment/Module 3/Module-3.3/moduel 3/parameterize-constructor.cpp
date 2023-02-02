#include<iostream>
using namespace std;
class parameter
{
 public:
 parameter(int no)
 {
    cout<<"value of no is:"<<no;
 }
};
int main()
{
    int no;
    cout<<"enter the value of no:";
    cin>>no;
    parameter par(no);
}