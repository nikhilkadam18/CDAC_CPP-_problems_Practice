#include<iostream>
using namespace std;

#define MAXSIZE(a,b) (a>b)?a:b;

int main()
{
	int a,b;
	cout<<"Enter 1st number: "<<endl;
	cin>>a;
	cout<<"Enter 2nd number: "<<endl;
	cin>>b;
	int result = MAXSIZE(a,b);
	cout<<"Maximum number is : "<<result<<endl;
}
