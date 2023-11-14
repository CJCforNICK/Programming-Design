#include<stdio.h>

int main(){
	
	int m,n,i,j=0,h[60],num[30],temp,k,l;
	scanf("%d\n%d",&m,&n);
	for(i=0;i<m;i++)
		num[i+1]=i+1;
	for(i=0;i<n;i++)
	{	
		scanf("%d,%d",&h[j],&h[j+1]);
		j+=2;
	}
	j=0;
	for(i=0;i<n;i++)
	{	
		
		k=h[j];
		l=h[j+1];
		temp=num[k];
		num[k]=num[l];
		num[l]=temp;
		j+=2;
	}
	for(i=0;i<m;i++)
	{
		printf("%d\n",num[i+1]);
	}
return 0;
}

