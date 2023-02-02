#include<iostream>
using namespace std;
class constructor
{
 public:
       int no;
       constructor()
       {
        cout<<"enter the value of no:";
        cin>>no;
       }
       void showdata()
       {
        cout<<"value of no is:"<<no<<endl;
       }
};
int main()
{
    constructor con;
    con.showdata();
    return 0;
}

   