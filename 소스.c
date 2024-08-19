#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
	printf("\n");
}

void DrawStarJump(int starLine)
{
	printf("*");
	for (int i = 0; i < starLine - 2; i++)
		printf(" ");
	printf("\n");
	printf("*");
}

void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
		DrawStarLine(starCount);
}

void DrawStartOutLine(int starCount, int starLine)
{
	DrawStarLine(starCount);
	DrawStarJump(starLine);
	DrawStarJump(starLine);
	DrawStarLine(starCount);
}

int main(void)
{
	int starCount, starLine;
	scanf_s("%d %d", &starCount, &starLine);

	DrawStartOutLine(starCount, starLine);

	return 0;
}
