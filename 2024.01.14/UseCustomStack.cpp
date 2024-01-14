#include<stdio.h>
#include "CustomStack.h"

int main()
{
//	CustomStack<int>* intStack = new CustomStack<int>();
//	(*intStack).Push(0);
//	(*intStack).Push(1);
//	(*intStack).Push(2);
//	printf("%d\n", (*intStack).Size());
//	printf("%d\n", (*intStack).Pop());
//	printf("%d\n", (*intStack).Pop());


//	CustomStack<int>* intStack = new CustomStack<int>();
//	(*intStack).Push(0);
//	(*intStack).Push(1);
//	(*intStack).Push(2);
//	printf("%d\n", (*intStack).Size());
//	printf("%d\n", (*intStack).Pop());
//	
//	int* intArray = (*intStack).ToArray();
//	delete intStack;
//	
//	printf("%d, %d\n", intArray[0], intArray[1]);
//	delete intArray;


	CustomStack<char>* charStack = new CustomStack<char>();
	(*charStack).Push('a');
	(*charStack).Push('b');
	(*charStack).Push('c');
	printf("%d\n", (*charStack).Size());
	printf("%c\n", (*charStack).Pop());
	char* charArray = (*charStack).ToArray();
	delete charStack;
	
	printf("%c, %c\n", charArray[0], charArray[1]);
	delete charArray;
	
}


