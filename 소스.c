#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
}

void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
		for (int k = 0; k < starCount; k++)
			printf("*");
}

int main(void)
{
	int input;
	scanf_s("%d", &input);

	DrawStarLine(input);

	return 0;
}

