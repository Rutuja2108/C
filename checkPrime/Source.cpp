#include<stdio.h>
#define TRUE 1
#define FALSE 0

int checkPrime(int n)
{
	int i = 0;
	for (i = 1;i <= (n / 2);i++)
	{
		if ((n % i) == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 15;
	int iret = 0;
	iret = checkPrime(i);
	if (iret =1)
	{
		printf("\nPrime Number");
	}
	else
	{
		printf("\nNot a Prime Number");
	}
	return 0;
}










