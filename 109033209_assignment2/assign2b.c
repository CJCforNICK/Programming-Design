#include<stdio.h>
int main(){

int i,j,x=0;
unsigned long long sum=0;
double n, m;
printf("Please type in two integers n & m\n");
scanf("%lf %lf", &n, &m);
int a=n,b=m;
	if (a==n &&b==m)
	{ for(i=1;i<=n;i++)
     {
        unsigned long long a=i;
        for(j=1;j<m;j++)
        {
            a*=i;
        }
        sum+=a;
     }
    	printf("The sum of the function is %lld",sum);
 	 }
	  else
     { 
	  printf("Please type in integers instead of the other numbers.");
     }
return 0;
}

