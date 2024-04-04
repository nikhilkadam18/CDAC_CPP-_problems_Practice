#include <iostream> 
using namespace std; 

int main()
{
	try {
		throw 10;
	}
	catch(char* except)
	{
		cout<<"caught"<<except;
	}
	catch(...)
	{
		cout<<"Default exception"<<endl;
	}
}

