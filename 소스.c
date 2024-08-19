#include <stdio.h>

// ���� starCount �Լ� ��ŭ ���� �׷��ִ� �Լ�
void DrawStarLine(int starCount)
{
	for (int i = 0; i < starCount; i++)
		printf("*");
	printf("\n");
}

// �� ���̿� ������ ������ִ� �Լ�
void DrawStarJump(int starCount)
{
	printf("*");
	for (int i = 0; i < starCount - 2; i++)
		printf(" ");
	printf("*");
	printf("\n");
}

// ���� �ڽ� �ȿ� �ϳ� �׷��ִ� �Լ�
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

// starCount, starLine ���� ���� �޾� ���� �簢���� �׷��ִ� �Լ�
void DrawStarSquare(int starCount, int starLine)
{
	for (int i = 0; i < starLine; i++)
		DrawStarLine(starCount);
}

// ���� �ڽ��� �׷��ִ� �Լ�
void DrawStarOutLine(int starCount, int starLine)
{
	DrawStarLine(starCount);
	for (int i = 0; i < starLine - 2; i++)
		DrawStarJump(starCount);
	DrawStarLine(starCount);
}

// ���������� ���ε� �ڽ��ȿ� �� �ϳ��� �׷� �ִ� �Լ�
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
