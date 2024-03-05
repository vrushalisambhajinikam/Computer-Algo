
#include<stdio.h>

int main()
{
	int i,key,arr[100],n;
	printf("Enter how many ele you want to store:\n");
	scanf("%d",&n);
	printf("Enter Elements of array:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int low=0; int high=n-1;
	printf("\n Enter Key ele for search:");
	scanf("%d",&key);

	int index=BinarySearch(arr,low,high,key);

	if(index==-1)
	{
		printf("\n Key Element not found ");
	}
	else
	{
		printf("\n Element found Successfully");
	}
}

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
