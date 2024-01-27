#include<stdio.h>

void Function1(int* a)
{
	++a;
	printf("\nFunction1\nin ");
	printf("(%d) = NaN\n", a);
}

void Function2(int& a)
{
	++a;
	printf("\nFunction2\nin ");
	printf("(%d) = %d\n", &a, a);
}

void Function3(int* a)
{
	*a = *a + 1;
	printf("\nFunction3\nin ");
	printf("(%d) = %d\n", a, *a);
}

void Function4(int a)
{
	++a;
	printf("\nFunction4\nin ");
	printf("(%d) = %d\n", &a, a);
}

int main()
{
	int x = 1;
	printf("just int x\n");
	printf("x(%d) = %d\n", &x, x);
	
	Function1(&x);
	printf("out x(%d) = %d\n", &x, x);
	
	Function2(x);
	printf("out x(%d) = %d\n", &x, x);
	
	Function3(&x);
	printf("out x(%d) = %d\n", &x, x);
	
	Function4(x);
	printf("out x(%d) = %d\n", &x, x);
	
	
	int* y = new int(1);
	printf("\nnew int y\n");
	printf("y(%d) = %d\n", y, *y);
	
	Function1(y);
	printf("out y(%d) = %d\n", y, *y);
	
	Function2(*y);
	printf("out y(%d) = %d\n", y, *y);
	
	Function3(y);
	printf("out y(%d) = %d\n", y, *y);
	
	Function4(*y);
	printf("out y(%d) = %d\n", y, *y);

	delete y;
	printf("\ndelete y\n");
	
	
	int* z = &x;
	printf("\npointer int z\n");
	printf("z(%d) = %d\n", z, *z);
	
	Function1(z);
	printf("out z(%d) = %d\n", z, *z);
	
	Function2(*z);
	printf("out z(%d) = %d\n", z, *z);
	
	Function3(z);
	printf("out z(%d) = %d\n", z, *z);
	
	Function4(*z);
	printf("out z(%d) = %d\n", z, *z);
}