>
#include<stdio.h>
using namespace std;
int BinarySearch(int arr[],int key,int low,int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]<low)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}	
	
		return -1;
	}
	
}
int main()
{
	int i,key,arr[100],n;
	cout<<"Enter how many ele you want to store:"<<endl;
	cin>>n;
	cout<<"Enter Elements of array:"<<endl;
	for(i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
	
	int low=0; int high=n-1;
	cout<<"Enter Key ele for search:"<<endl;
	cin>>key;

	int index=BinarySearch(arr,low,high,key);

	if(index==-1)
	{
		cout<<"Key Element not found "<<endl;
	}
	else
	{
		cout<<"Element found Successfully"<<endl;
	}
}
