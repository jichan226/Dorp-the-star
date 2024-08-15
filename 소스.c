#include <stdio.h>

int main(void)
{
	int star;
	scanf_s("%d", &star);
	for (int i = 0; i < star; i++)
		printf("*");
}