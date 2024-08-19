#include <stdio.h>

// 별을 starCount 함수 만큼 한줄 그려주는 함수
void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
	printf("\n");
}

// 별 사이에 공백을 만들어주는 함수
void DrawStarJump(int starCount)
{
	printf("*");
	for (int i = 0; i < starCount - 2; i++)
		printf(" ");
	printf("*");
	printf("\n");
}

// 별을 박스 안에 하나 그려주는 함수
void DrawStarMove(int starCount, int movePosition)
{
	printf("*");
	for (int i = 0; i < starCount - 2; i++)
		if (i != movePosition)
			printf(" ");
		else
			printf("*");

	printf("*");
	printf("\n");
}

// starCount, starLine 변수 값을 받아 별로 사각형을 그려주는 함수
void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
		DrawStarLine(starCount);
}

// 별로 박스를 그려주는 함수
void DrawStarOutLine(int starCount, int starLine)
{
	DrawStarLine(starCount);
	for (int i = 0; i < starLine - 2; i++)
		DrawStarJump(starCount);
	DrawStarLine(starCount);
}

// 최종적으로 별로된 박스안에 별 하나를 그려 주는 함수
void DrawStarPoint(int starCount, int starLine, int starPosition)
{
	DrawStarLine(starCount);
	DrawStarJump(starCount);
	DrawStarMove(starCount, starPosition);
	DrawStarJump(starCount);
	DrawStarLine(starCount);
}

int main(void)
{
	int starCount, starLine, starPosition;
	scanf_s("%d %d %d", &starCount, &starLine, &starPosition);

	DrawStarPoint(starCount, starLine, starPosition);

	return 0;
}
