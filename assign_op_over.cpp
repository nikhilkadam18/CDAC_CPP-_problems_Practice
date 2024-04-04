#include<iostream>
using namespace std;
#include<string.h>

class test
{
	int len;
	char* ptr;
	public:
		void display();
		void operator=(test&);
		test(char*);
};
void test::operator=(test& s)
{
	cout<<"Assignment operator called"<<endl;
	delete[] ptr;
	len = s.len;
	ptr = new char[len+1];
	strcpy(ptr,s.ptr);
}
void test::display()
{
	cout<<"length is: "<<len<<endl;
	cout<<"string is: "<<ptr<<endl;
}
 test::test(char* sptr)
{
	cout<<this<<endl;
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
int main()
{
	test s1("IET");
	test s2("IACSD");
//	test s3=s1;
//	s1=s2;
	s2=s1;
	s2.display();
}
