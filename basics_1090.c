#include<stdio.h>
int main()
{
	long long a, r, n;
	long long sum = 0;
	
	scanf("%lld %lld %lld", &a, &r, &n);

	for (int i = 1; i < n; i++)
	{
		sum = a *= r;
	}

	printf("%lld", sum);
}
