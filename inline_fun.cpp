#include<iostream>
using namespace std;

	inline int cube(int num)
	{
		
		return num*num*num;
	}
	int main()
	{
		int num;
		cout<<"Enter a number"<<endl;
		cin>>num;
		cout<<"Cube of "<<num<<" is : "<<cube(num)<<endl;
	}

