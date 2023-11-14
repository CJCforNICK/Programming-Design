#include<stdio.h>

int main(){
	
	int n[101],k,j,count=0,max,i;
	for(i=0;i<101;i++)
		n[i]=0;
	while(scanf("%d",&k)!=EOF) 
	{	
		n[k+1]++;
	}
	max=0;
	for(j=1;j<101;j++)
	{
		if(n[j]>max)
			max=n[j];
	}
	for(j=1;j<101;j++)
	{
		if(n[j]==max)
			printf("%d\n",j-1);
	}



return 0;
}

