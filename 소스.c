#include <stdio.h>

void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
}

int main(void)
{
	int input;
	scanf_s("%d", &input);
	DrawStarLine(input);
	return 0;
}
