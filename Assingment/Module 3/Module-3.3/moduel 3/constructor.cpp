#include<iostream>
using namespace std;
class constructor
{
    public:
          string nm;
          constructor(string n)
          {
            nm=n;
          }
          constructor(constructor &con)
          {
            nm=con.nm;
          }
          void print()
          {
            cout<<"your name is:"<<nm<<endl;
          }
};
int main()
{
    constructor con1("hello");
    constructor con2=con1;
    con1.print();
    con2.print();
}

