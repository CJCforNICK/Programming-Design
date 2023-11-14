#include<stdio.h>
#include<math.h>
int main(){
	while(1)
	{
	int i=0,j=0,p[2147483647],n,count=0;
	int judge=1;
	scanf("%d",&n);
	for(i=0;i<2147483647;i++)
	{ p[i]=1;
	}
	p[0]=0;
	p[1]=0;
	for(i=2;i<=sqrt(2147483647);i++)
	{
		for(j=i;j<2147483647;j+=i)
		 { 
		 	if(i%2==0&&i!=2)
			break;
		 	if(j%i==0&&j!=i)
			{ p[j]=0;
			}
		}
	}
	for(i=0;i<=2147483647;i++)
	{	if(p[i]==n)
		{	printf("p");
			judge=0;
			break;
		}
	}
	if(judge)
		printf("np");
}
	
	
return 0;
}
