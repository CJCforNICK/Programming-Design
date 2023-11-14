#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
int main() 
{
	int n,k,i,yn;
	char *a;
	double count=0;
	scanf("%s",&a);
	n=atoi(a);
	while(n>=0)
	{	
		count++;
		n/=n;
	}
	for(i=0;i<count;i++)
	{	k+=pow(a[i],count);
	}
	if(k==n)
		printf("yes");
		else
			printf("no");
	return 0;
}

