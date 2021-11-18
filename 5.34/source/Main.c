#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int base;
	int exp;
	printf("put in base and exponent:");
	scanf_s("%d %d", &base, &exp);
	printf("%d^%d=%d\n", base, exp, power(base, exp));

	system("pause");
	return 0;
}

int power(int base, int exp)
{
	int i;
	if (exp == 0)
	{
		return 1;
	}
	else if (exp == 1)
	{
		return base;
	}
	else
	{
		i = pow(base, exp);
		return i;
	}


}
