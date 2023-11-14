#include<stdio.h>

int main(){
	int a[9],b[9],c[20],i,j;
	printf("Please input two two sets of numbers\n");
	printf("Input 1:");
	for(i=0;i<10;i++)
	{	scanf("%d",&a[i]);
		c[i]=a[i];
	}
	printf("Input 2:");
	for(i=0;i<10;i++)
	{	scanf("%d",&b[i]);
		c[i+10]=b[i];
	}
	printf("Intersection:");      //Intersection
	for(i=0;i<10;i++)
	{	for(j=0;j<10;j++)
		{	if(a[i]==b[j])
				{printf("%d ",a[i]);
				}
		}
	}
	printf("\nUnion:");   //Union
	for(i=0;i<20;i++)
	{	for(j=i+1;j<=20;j
	++)
			{ if(c[i]==c[j])
				{	c[j]=-1;
				}
			}
	}
	for(i=0;i<20;i++)
	{	if(c[i]!=-1)
		printf("%d ",c[i]);
	}
	

return 0;
}

