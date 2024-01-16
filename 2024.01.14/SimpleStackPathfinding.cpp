#include<stdio.h>
#include "CustomStack.h"

class Vector2Int
{
	public :
		int x;
		int y;
		
		Vector2Int(int _x, int _y)
		{
			x = _x;
			y = _y;
		}
		
		~Vector2Int()
		{
			printf("Delete Vector\n");
		}
};

int main()
{
	CustomStack<Vector2Int>* v2dStack = new CustomStack<Vector2Int>();
	(*v2dStack).Push(new Vector2Int(0, 0));
//	(*v2dStack).Push(Vector2Int(0, 1));
//	(*v2dStack).Push(Vector2Int(0, 2));
//	printf("%d\n", (*v2dStack).Pop().y);
	
	
//	(*charStack).Push('b');
//	(*charStack).Push('c');
//	printf("%d\n", (*charStack).Size());
//	printf("%c\n", (*charStack).Pop());
//	char* charArray = (*charStack).ToArray();
//	delete charStack;
//	
//	printf("%c, %c\n", charArray[0], charArray[1]);
//	delete charArray;


	delete v2dStack;
}


