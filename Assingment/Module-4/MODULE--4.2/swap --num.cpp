#include<iostream>
using namespace std;
class swap
{
  int temp,a,b;
  public:
  swap(int a,int b)
  {
    a=a;
    b=b;
  }
  friend void swap(swap);
};
void swap(swap s1)
{
    cout<<"\nbefore swapping: "<<s1.a<<" "<<s1.b;
    s1.temp=s1.a;
    s1.a=s1.b;
    s1.b=s1.temp;
    cout<<"\nafter swapping: "<<s1.a<<" "<<s1.b; 
}
int main()
{
    swap s(1,10);
    swap(s);
    return 0;
}