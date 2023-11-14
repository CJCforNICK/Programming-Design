#include<stdio.h>
#include<string.h>

int main(){

	char voc[33];
	char sen[1000][33];
	int index=0,i,j,lgst=0,fq=0,mtfq=0;
	while(scanf("%s",voc)!=EOF)
	{
		strcpy(sen[index],voc);
		index++;
	}
	int leng=strlen(sen[0]),times[index]; 
	for(i=0;i<index;i++)
	{
		times[i]=1; //initialize
	}
	for(i=0;i<index;i++)
	{
		if(strlen(sen[i])>leng)
		{
			leng=strlen(sen[i]);
			lgst=i;
		}
		if(times[i]!=1)
		{
			continue;
		}
		for(j=i+1;j<index;j++)
		{
			if(strcmp(sen[i],sen[j])==0)
			{
				times[j]=0;
				times[i]++;
			}
		}
	}
	for(i=0;i<index;i++)
	{
		if(times[i]>fq)
		{
			fq=times[i];
			mtfq=i;
		}
	}
	printf("%s %s\n",sen[mtfq],sen[lgst]);
return 0;
}

