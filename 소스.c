#include <stdio.h>

void DrawStarLine(int StarCount)
{
	for (int i = 0; i < StarCount; i++)
		printf("*");
}

int main(void)
{
	DrawStarLine(10);
	return 0;
}
