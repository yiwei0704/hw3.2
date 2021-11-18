#include <stdio.h>
#include <stdlib.h>

int LCM(int i, int j);

int main(void)
{
	int number1, number2;
	printf("put in two positive integers: ");
	scanf_s("%d%d", &number1, &number2);
	printf("LCM is %d", LCM(number1, number2));

	system("pause");
	return 0;
}

int LCM(int i, int j)
{
	int k = 1;
	while ((k % i != 0) || (k % j != 0))  //當有一條件成立時，k++，當餘數皆為0時，回傳k值
	{
		k++;
	}

	return k;
}