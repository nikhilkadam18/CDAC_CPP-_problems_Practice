#include<iostream>
using namespace std;

class employee
{
	public:
		virtual int cs()
		{
			return 0;
		}	
};
class wemp : public employee
{
    int sal;
	public:
	    wemp()
	    {
	    	
		}
		wemp(int hrs,int rate)
		{
			this->sal = hrs * rate;
		}
		int cs()
		{
			return sal;
		}
};
class salesp : public wemp
{
	int salary;
	public:
		salesp()
		{
			
		}
		salesp(int m)
		{
			this->salary=m;
		}
		int cs()
		{
			return salary;
		}
};
int main()
{
	employee * ptr;
	employee e1;
	ptr = &e1;
	cout<<ptr->cs()<<endl;
	
	wemp we1(2,50);
	ptr = &we1;
	cout<<ptr->cs()<<endl;
	
	salesp s(500);
	ptr = &s;
	cout<<ptr->cs()<<endl;
	
	return 0;
}
