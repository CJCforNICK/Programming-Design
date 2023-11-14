#include<stdio.h>
#include<math.h> 
int main(){
	int i=0,j=0,p[1000];
	for(i=0;i<=1000;i++)
	{ p[i]=1;
	}
	p[0]=0;
	p[1]=0;
	for(i=2;i<=sqrt(1000);i++)
	{
		for(j=i;j<=1000;j+=i)
		 { 
		 	if(i%2==0&&i!=2)
			break;
		 	if(j%i==0&&j!=i)
			{ p[j]=0;
			}
		}
	}
	for(i=0;i<=1000;i++)
	{if(p[i]==1)
		printf("%d ",i);
	}

return 0;
}

