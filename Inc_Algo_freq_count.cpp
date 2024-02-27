#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int n,i=1,count=0;
		time_t t1,t2;
	cout<<"Enter n val: "<<endl;
	cin>>n;
	count=count+1;
	time(&t1);
	while(i<=n)
	{
		count=count+1;
		cout<<"Ok"<<" ";
		i=i+1;
		count=count+2;
	}
	count=count+1;
	cout<<"\nTotal steps : "<<count<<endl;
		time(&t2);
		cout<<t1<<endl;
		cout<<t2<<endl;
		printf("%.5f",difftime(t2,t1));
		
}








