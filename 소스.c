#include <stdio.h>

void DrowStarLine()
{
	int StarCount;
	scanf_s("%d", &StarCount);
	for (int i = 0; i < StarCount; i++)
	printf("*");

}

int main(void)
{
	DrowStarLine();
	return 0;

}