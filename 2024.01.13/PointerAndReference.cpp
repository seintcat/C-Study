#include<stdio.h>

void swap1(int& x, int& y)
{
	printf("swap1\n%d, %d", x, y);
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf(" > %d, %d\n", x, y);
}
void swap2(int* x, int* y)
{
	printf("swap2\n%d(%d), %d(%d)", x, *x, y, *y);
//	printf("\n(%d, %d >> %d, %d)\n", &x, &y, *x, *y);
	int* tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf(" > %d, %d\n", *x, *y);
}
void swap3(int* x, int* y)
{
	printf("swap3\n%d(%d), %d(%d)", x, *x, y, *y);
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf(" > %d(%d), %d(%d)\n", x, *x, y, *y);
}

int main()
{
	int a = 1, b = 2;
	swap1(a, b);
	swap2(&a, &b);
	swap3(&a, &b);
	printf("end > %d, %d\n", a, b);
}
