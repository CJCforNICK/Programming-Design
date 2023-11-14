#include<stdio.h>

int main(){

	int m,n,i,k=0;
	scanf("%d %d",&m,&n);
	int a[m],b[n];
	if(m>n)
		k=m;
		else
			k=n;
	for(i=0;i<k;i++)
	{
		a[k]=0;
		b[k]=0;
	} 
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		printf("%d %d\n",a[i],b[i]);
return 0;
}

