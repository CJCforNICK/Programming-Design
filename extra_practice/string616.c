#include<stdio.h>
#include<stdio.h>
#include<string.h>

void shift(char a[],int n)
{
	int i,j=0;
	char b[n],c[n];
	strcpy(b,a);
	strcpy(c,a);
	for(i=n-3;i<n;i++)
	{
		printf("%c",b[i]);
	} 
	for(i=0;i<n-3;i++)
	{
		printf("%c",c[i]);
	} 

}

void inverse(char a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
			continue;
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
			continue;
		if(a[i]=='\0')
			break;
	}
	printf("%s\n",a);
}

int main(){

	char string[129];
	int n,i;
	printf("Please enter a string:");
	scanf("%s",string);
	n=strlen(string);
	shift(string,n);
	printf("\nzxc\n");
	inverse(string,n);
	

return 0;
}

