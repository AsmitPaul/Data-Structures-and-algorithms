#include <stdio.h>

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}


int func(char *str1,char *str2,int m,int n)
{
	if(m<0||n<0)
		return 0;
	if(str1[m]==str2[n]){
		printf("%c - %c\n",str1[m],str2[n]);
		return 1+func(str1,str2,m-1,n-1);
	}
	else{
	
		return max(func(str1,str2,m-1,n),func(str1,str2,m,n-1));
			    
			    }
}

int main(void) {
  char str1[4]="AGXB",str2[4]="AXYB";
  char store[4]={'\0'};
  int ans;
  ans=func(str1,str2,3,3);
  printf("%d ", ans);
	return 0;
}

