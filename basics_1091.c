#include<stdio.h>
int main() {

	long long sum=0;
	long long a, m, d, n;

	scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

	if (n == 1)
	{
		printf("%lld", a);
		return 0;
	}
	sum = a * m + d;

	for(long long i=2; i<n; i++)
	{
		sum = sum * m + d;
	}
	
	printf("%lld", sum);
}
