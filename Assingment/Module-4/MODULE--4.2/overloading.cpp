#include<iostream>
using namespace std;

class overloading
{
	public:
		int area(double r)
		{
			cout<<endl<<"Area of circle is:"<<3.14*r*r;
			return 0;	
		} 
		
		int area(double w, double l)
		{
			cout<<endl<<"Area of rectangle is:"<<w*l;
			return 0;
		}
		
		int area(int b, int h)
		{
			cout<<endl<<"Area of triangle is:"<<b*h/2;
			return 0;
		}
};

int main()
{
	overloading f;
	f.area(1);
	f.area(2.2,2.2);
	f.area(2,3);
	return 0;
}
