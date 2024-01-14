#include<stdio.h>

#define ArraySize 5

int main()
{
	int array[ArraySize];
	
	for(int i = 0; i < ArraySize; ++i)
	{
		printf("\n%d >> \n", i);
		scanf("%d", array + i);
	}
	
	printf("\n");
	for(int i = 0; i < ArraySize; ++i)
	{
		printf("%d\n", array[i]);
	}
	printf("\n");
	
	
	for(int i = 0; i < ArraySize; ++i)
	{
		printf("\n%d >> \n", i);
		scanf("%d", &array[i]);
	}
	
	printf("\n");
	for(int i = 0; i < ArraySize; ++i)
	{
		printf("%d\n", array[i]);
	}
	printf("\n");
}
