#include<iostream>
using namespace std;

	int largest(int arr[],int size)
	{
		int i;
		int max=arr[0];
		
		for(i=1;i<size;i++)
		{
			if(arr[i]>max)
			max=arr[i];
		}
		return max;
	}
int main()
{
	int arr[5]={23,12,45,4,56};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"largest element is: "<<largest(arr,size);
	
}
