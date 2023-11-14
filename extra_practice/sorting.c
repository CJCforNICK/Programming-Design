#include<stdio.h>
#include<stdlib.h> 

int main(){
	
	int n,i,j;
	scanf("%d", &n);
	int  *numset=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",numset[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>0;j--)
		{
			if(numset[i]<numset[j])
			{
				
			}
		}
	}


	free(numset);
	numset=NULL;
	
return 0;
}

