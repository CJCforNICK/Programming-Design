#include <stdio.h>
#include <math.h>

int main()
{

	printf("Please type in two integers n & m\n");
	double n, m;
	scanf("%lf %lf", &n, &m);
	int a = n, b = m;
	if (a == n && b == m)
	{
		long i, x = 0;
		unsigned long long sum = 0;
		for (i = 1; i <= n; i++)
		{
			x = pow(i, m);
			sum = sum + x;
		}
		printf("The sum of function is %lld\n", sum);
	}
	else
	{
		printf("error\n");
	}

	return 0;
}
