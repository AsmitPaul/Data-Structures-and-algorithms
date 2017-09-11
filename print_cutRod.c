#include<stdio.h>

int max(int x,int y)
{
	if(x>y)
		return x;
	return y;
}

void printCutRod(int arr[][6],int n,int len,int ans)
{
	if(n<=0||len<=0)
		return;
	if(arr[n-1][len]==ans)
		printCutRod(arr,n-1,len,ans);
	else
	{
		printf("Rod length = %d\n",n);
		ans=arr[n][len-n];
		printCutRod(arr,n,len-n,ans);
	}
}

cut_rod(int len,int *cut_len,int *price,int n)
{
	int i,j,ans;
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
	printf("MAX PROFIT = %d \n",arr[4][5]);
	ans=arr[4][5];
	printCutRod(arr,n,len,ans);
}

int main()
{
	int len=5;
	int cut_len[4]={1,2,3,4};
	int price[5]={0,2,5,7,8};
	cut_rod(len,cut_len,price,4);
}
