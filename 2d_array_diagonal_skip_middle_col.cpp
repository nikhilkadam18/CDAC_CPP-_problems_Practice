#include<iostream>
using namespace std;

int main()
{
	int i,j,sum=0,row,col;
	int s[3][3];
	cout<<"enter number of rows: "<<endl;
	cin>>row;
	cout<<"enter number of col: "<<endl;
	cin>>col;
	cout<<"enter numbers for matrix:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>s[i][j];
		}
	}
	cout<<"matrix is:"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(j==1)
			continue;
			cout<<"\t"<<s[i][j];
		}
		cout<<endl;
	}
}
