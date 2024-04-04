#include <iostream> 
using namespace std; 

int main()
{
	try {
		throw 'a';
	}
	catch(int res){
		cout<<"result is: "<<res<<endl;
	}
	catch(...)
	{
		cout<<"Default exception"<<endl;
	}
}
