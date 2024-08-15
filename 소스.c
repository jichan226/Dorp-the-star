#include <stdio.h>

void DrawStarLine()
{
	int starCount;
	scanf_s("%d", &starCount);
	for (int i = 0; i < starCount; i++)
		printf("*");
}

int main(void)
{
	DrawStarLine();
	return 0;
}
