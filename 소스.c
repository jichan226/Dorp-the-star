#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");

	printf("\n");
}

void DrawStarSquare(int starCount, int starLine)
{
	for (int j = 0; j < starLine; j++)
	DrawStarLine(starCount);
}

int main(void)
{
	int starCount, starLine;
	scanf_s("%d %d", &starCount, &starLine);

	DrawStarSquare(starCount, starLine);

	return 0;
}
