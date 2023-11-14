#include<stdio.h>

int main(){
	
	
	int n,i,total=0,score;
	double ave;
	scanf("%d",&n);
	while(scanf("%d",&score)!=EOF)
	{
		total+=score;
	}
	ave=(double)total/n;
	if(ave>59)
	{
		printf("no");
	}else
	{
		printf("yes");
	}

return 0;
}

