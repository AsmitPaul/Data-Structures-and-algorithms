#include <stdio.h>
int i=0;

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

int check(char *store,char entity)
{
	int j=0;
	if(i==0)
		return 0;
	for(j=0;j<=i;j++)
	{
		if(store[j]==entity)
			return 1;
	}
	return 0;
}


int func(char *str1,char *str2,int m,int n,char *store)
{
	int res;
	if(m<0||n<0)
		return 0;
	if(str1[m]==str2[n]){
		res=check(store,str1[m]);
		if(res==0)
		{
			store[i]=str1[m];
			i++;
			printf("%c - %c\n",str1[m],str2[n]);
		}
		return 1+func(str1,str2,m-1,n-1,store);
	}
	else{
	
		return max(func(str1,str2,m-1,n,store),func(str1,str2,m,n-1,store));
			    
			    }
}

int main(void) {
  char str1[4]="AGXB",str2[4]="AXYB";
  char store[4]={'\0'};
  int ans;
  ans=func(str1,str2,3,3,store);
  printf("%d ", ans);
	return 0;
}

