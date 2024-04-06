#include <iostream> 
using namespace std; 
 class emp 
{
 	int id;
 	public:
 		void show()
 		{
 			cout<<"in show";
		 }
};
int main() 
{ 
	typedef emp e;
	e obj;
	obj.show(); 


}



