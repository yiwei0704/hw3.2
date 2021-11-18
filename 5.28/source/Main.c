#include<stdio.h>
#include<stdlib.h>

char change(char j);

int main(void)
{
	char leter;
	printf("put in a large or small leter: ");
	scanf_s("%c", &leter);
	printf("exchange %c", change(leter));

	system("pause");
	return 0;
}

char change(char j)                   
{
	if (j >= 'a' && j <= 'z')
	{
		j = j - 32;
	}

	else if (j >= 'A' && j <= 'Z')      
	{
		j = j + 32;
	}

	return j;
}