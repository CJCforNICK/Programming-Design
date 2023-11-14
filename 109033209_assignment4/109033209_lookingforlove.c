#include <stdio.h>
int N;			   // amount of choices
int factorial[11]; // array for factorial amounts
int place[10];	   // index of numbers

void Factorial()
{
	factorial[0] = 1;
	int i;
	for (i = 1; i < 11; i++)
	{
		factorial[i] = i * factorial[i - 1];
	}
}

int Min(int array[], int a)
{
	int i, min = array[0];
	for (i = 0; i <= a - 1; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}
	return min;
}

void print()
{
	int i = 0;
	for (i = 0; i <= N - 1; i++)
		printf("%d ", place[i]);
	printf("\n");
}

void find()
{
	int i = 0, j = 0;
	for (i = N - 2; i >= 0; i--)
	{
		if (place[i] < place[i + 1])
			break;
	}
	int breakpoint = i;
	int temp_low = i + 1; // breakpoint right
	for (i = breakpoint + 1; i < N; i++)
	{
		if (place[i] > place[breakpoint] && place[i] < place[temp_low])
			temp_low = i;
	}
	int temp; // swap
	temp = place[breakpoint];
	place[breakpoint] = place[temp_low];
	place[temp_low] = temp;
	// reverse
	for (j = breakpoint + 1, i = N - 1; i > j; i--, j++)
	{
		temp = place[i];
		place[i] = place[j];
		place[j] = temp;
	}
}

int main()
{
	printf("Please input an integer:");
	int r;
	double P[10]; // i
	double p[10]; // possibility
	Factorial();
	scanf("%d", &N);
	int k = 0; // minimum
	int i;	   // for loop
	int n;	   // find minimum before place[r]
	int m;	   // check from r-1 to number1
	int l;	   // for loop for max_p
	int t;	   // index of max_p
	double max_p;
	double s; // save for temporary number
	for (i = 0; i < N; i++)
	{
		place[i] = i + 1; // initial number array
		// printf("%d ",place[i]);
		P[i] = 0;
	}
	printf("\n");

	for (i = 1; i < factorial[N]; i++)
	{
		find();
		// print();
		for (r = 0; r < N; r++)
		{
			if (r == 0 || r == N - 1)
				continue;
			k = Min(place, r);
			for (m = r; m < N; m++)
			{
				if (place[m] < k && place[m] != 1)
					break;
				if (place[m] < k)
					P[r]++;
			}
		}
	}
	p[0] = (double)1 / N;
	printf("P[%d]=%f\n", 1, p[0]);
	// printf("%d\n",factorial[N]);
	for (r = 1; r < N - 1; r++)
	{
		p[r] = (double)P[r] / factorial[N];
		printf("P[%d]=%f\n", r + 1, p[r]);
	}
	p[N - 1] = (double)1 / N;
	printf("P[%d]=%f\n", N, p[N - 1]);
	max_p = p[0];
	for (l = 0; l < N; l++)
	{
		if (p[l] > max_p)
		{
			max_p = p[l];
			t = l;
		}
	}
	printf("The best stopping r point =%d\n", t + 1);
	printf("The possibility of r P[%d] is %f", t + 1, max_p);

	return 0;
}
