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
	while ((k % i != 0) || (k % j != 0))  //���@���󦨥߮ɡAk++�A��l�ƬҬ�0�ɡA�^��k��
	{
		k++;
	}

	return k;
}