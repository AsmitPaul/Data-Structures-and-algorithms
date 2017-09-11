#include<stdio.h>

void lis(int *arr,int *lis_arr,int n)
{
	int i=0,j=1;
	int max=0;
	for(j=1;j<n;j++)
	{
		for(i=0;i<j;i++)
		{
			if(arr[i]<arr[j])
			{
				lis_arr[j]=lis_arr[i]+1;
			}
		}
	}
	max=lis_arr[0];
	for(i=1;i<n;i++)
	{
		if(max<lis_arr[i])
			max=lis_arr[i];
	}
	printf("LIS = %d\n",max);
		
}

int main()
{
	int arr[7]={3,4,-1,0,6,2,3};
	int lis_arr[7]={1,1,1,1,1,1};
	lis(arr,lis_arr,7);
	return 0;
}
