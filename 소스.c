#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
	printf("\n");
}

void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
		DrawStarLine(starCount);
}

void DrawStartOutLine(int starCount, int starLine)
{
	printf("*****\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*****\n");
}

int main(void)
{
	int starCount, starLine;
	scanf_s("%d %d", &starCount, &starLine);

	DrawStartOutLine(starCount, starLine);

	return 0;
}
