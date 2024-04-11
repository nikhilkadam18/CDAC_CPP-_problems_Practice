#include<iostream>
using namespace std;

class Demo
{
	
	public:
		int a;
		Demo()
		{
			a=10;
		}
};
int main()
{
	const Demo obj;
	cout<<"value is : "<<obj.a<<endl;
	//obj.a=20;//error bcoz we not change value of a after using const keyword
	cout<<"value is : "<<obj.a<<endl;
	
	
}
