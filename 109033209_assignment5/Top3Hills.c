#include<stdio.h>

int main(){
	
	int a[10],i,j,temp,min;
	for(i=0;i<10;i++)
		a[i]=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=9;i>6;i--)
		printf("%d\n",a[i]);
return 0;
}

