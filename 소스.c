#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
	printf("\n");
}

void DrawStarJump(int starCount)
{
	printf("*");
	for (int i = 0; i < starCount - 2; i++)
		printf(" ");
	printf("*");
	printf("\n");
}

void DrawStarMove(int starCount, int stopPosition)
{
	printf("*");
	for (int i = 0; i < starCount - 2; i++)
		if (i != stopPosition)
			printf(" ");
		else
			printf("*");

	printf("*");
	printf("\n");
}

void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
		DrawStarLine(starCount);
}

void DrawStarOutLine(int starCount, int starLine)
{
	DrawStarLine(starCount);
	for (int i = 0; i < starLine - 2; i++)
		DrawStarJump(starCount);
	DrawStarLine(starCount);
}

void DrawStarPoint(int starCount, int starLine, int stopPosition)
{
	DrawStarLine(starCount);
	DrawStarJump(starCount);
	DrawStarMove(starCount, stopPosition);
	DrawStarJump(starCount);
	DrawStarLine(starCount);
}

int main(void)
{
	int starCount, starLine, stopPosition;
	scanf_s("%d %d %d", &starCount, &starLine, &stopPosition);

	DrawStarPoint(starCount, starLine, stopPosition);

	return 0;
}
