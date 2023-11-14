#include<stdio.h>
#include<string.h>
#include<math.h>
#include <stdlib.h>
int arsnum(char a,int b)
{
	int n,k,i,yn;
	double count=0;
	while(n>=0)
	{	
		count++;
		n/=n;
	}
	for(i=0;i<count;i++)
	{	k+=pow(a[i],count);
	}
	if(k==b)
		yn=1;
		else
			yn=0;
	return yn;
}

int main(){
	
	int m,n,a,k;
	char n1,n2;
	scanf("%s%s",&n1,&n2);
	sprintf(n1,"%d",m);
	sprintf(n2,"%d",n);
	for(i=n;i<=m;i++)
	{	k= atoi(n1);
		a=arsnum(n1,i)
		switch(a)
		{
			case 1:
				printf("%d ")
		}
	}
	
	
	
	

return 0;
}

