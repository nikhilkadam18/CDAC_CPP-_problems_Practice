#include<iostream>
using namespace std;
class Demo
{
	int a;
public:
	static int cnt;
public:
	Demo()
	{
		a=10;
		cnt++;
	}
	Demo(int a)
	{
		this->a=a;
		cnt++;
	}
};
//datatype classname::static variable nam=value;
//int Demo::cnt;//memory allocation takes place
int main()
{
		Demo d;
		Demo d1(10);
		cout<<"no of obj created is "<<Demo::cnt;
}


