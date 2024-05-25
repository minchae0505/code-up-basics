#include<stdio.h>
int main()
{
	int a=0, d=0, n=0, i=0;
	int sum=0, result=0;
	
	scanf("%d %d %d", &a, &d, &n);
	int arr[102] = {0, };

	for (i = 0; i < n; i++)
	{
		if (i == 0 ) 
		{
			sum = arr[i] + a;
		}
		
		if(i==1 && a > 0)
		{
			sum = arr[i] + (sum + d);
		}

		if (i > 1 && a > 0)
		{
			sum = arr[i] + (sum + d);
		}
		
	}

	for (int j=i; j<n; j++) 
	{
		 sum = arr[j];

	}
	printf("%d", sum);
}
