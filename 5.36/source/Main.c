#include<stdio.h>
#include<stdlib.h>

void tower(int plate, int start, int finish, int temporary);
int main(void)
{
	int plate, start, finish, temporary;
	printf("enter the plate quality, enter the tower  order(1 or 2 or 3) or (1 or 2 or 3) or (1 or 2 or 3) : ");
	scanf_s("%d %d %d %d", &plate, &start, &finish, &temporary);
	tower(plate, start, finish, temporary);
	system("pause");
	return 0;
}

void tower(int plate, int start, int finish, int temporary)
{

	if (plate == 1)
	{
		printf("%d ==> %d\n", start, finish);
		return;
	}

	tower(plate - 1, start, temporary, finish);
	printf("%d ==> %d\n", start, finish);
	tower(plate - 1, temporary, finish, start);
}