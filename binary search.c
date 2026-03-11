#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int low = 0, high = 4,mid,key = 30;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(a[mid] == key)
		{
			printf("%d",mid+1);
			break;
		}
		else if(a[mid] <key)
		low = mid + 1;
		else
		high = mid-1;
	}
	return 0;
}
