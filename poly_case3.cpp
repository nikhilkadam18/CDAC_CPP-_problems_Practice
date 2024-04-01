#include<iostream>
using namespace std;

class employee
{
	int id;
	public:
		employee()
		{
			
		}
//		employee(int k)
//		{
//			this->id=k;
//		}
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
	employee* ptr = new employee();
    cout<<ptr->cs()<<endl;
	
	 ptr = new wemp(2,50);
	cout<<ptr->cs()<<endl;
	
	 ptr = new salesp(500);
    cout<<ptr->cs()<<endl;
	
	return 0;
}
