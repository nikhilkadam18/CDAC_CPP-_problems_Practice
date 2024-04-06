#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int s[3][3];
	cout<<"enter numbers:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>s[i][j];
		}
	}
	cout<<"matrix is:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<s[i][j];
		}
		cout<<endl;
	}
	
}
