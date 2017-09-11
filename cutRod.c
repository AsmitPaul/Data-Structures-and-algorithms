#include<stdio.h>

int max(int x,int y)
{
	if(x>y)
		return x;
	return y;
}

cut_rod(int len,int *cut_len,int *price,int n)
{
	int i,j;
	int arr[n+1][len+1];
	for(i=0;i<=n;i++)
		for(j=0;j<=len;j++)
			arr[i][j]=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=len;j++)
		{
			if(j<i)
			{
				arr[i][j]=arr[i-1][j];
			}
			else
			{
				arr[i][j]=max(price[i]+arr[i][j-i],arr[i-1][j]);
			}
		}
	}
	printf("%d \n",arr[4][5]);
}

int main()
{
	int len=5;
	int cut_len[4]={1,2,3,4};
	int price[5]={0,2,5,7,8};
	cut_rod(len,cut_len,price,4);
}
