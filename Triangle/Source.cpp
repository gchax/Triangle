#include <stdio.h>
#include <math.h>
void drawTriangle(int);

int main()
{
	int num;
	scanf_s("%d", &num);

	drawTriangle(num);

	return 0;
}

void drawTriangle(int n)
{
	for (int i = 0;i <= n;i++)
	{
		for (int j = 1;j <= i;j++) printf(" ");
		for (int j = 1;j <= 2 * (n - i) - 1;j++) printf("*");
		printf("\n");
	}
}