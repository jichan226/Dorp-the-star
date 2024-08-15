#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
}

void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
	{
		for (int j = 0; j < starCount; j++)
			printf("*");
		printf("\n");
	}

}

int main(void)
{
	int starCount, starLine;
	scanf_s("%d %d", &starCount, &starLine);

	DrawStarSquare(starCount, starLine);

	return 0;
}
