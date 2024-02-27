#include<iostream>
using namespace std;
int main()
{
	int n,i=1,count=0;
	int x[100];
	cout<<"Enter n val: ";
	cin>>n;
	count=count+1;
	do
	{
		count=count+1;
		x[i]=x[i]+2;
		i=i+2;
		count=count+2;
	}while(i>n);
	i=1;
	count=count+1;
	while(i<=n/2)
	{
		count=count+1;
		x[i]=x[i]+2;
		i=i+1;
		count=count+2;
	}
	count=count+1;
	
	cout<<"count is:"<<count;
}
