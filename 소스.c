#include <stdio.h>

void drow_star_line()
{
	int star;
	scanf_s("%d", &star);
	for (int i = 0; i < star; i++)
		printf("*");
}
int main(void)
{
	drow_star_line();
	return 0;

}