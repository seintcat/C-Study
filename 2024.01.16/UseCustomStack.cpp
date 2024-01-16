#include "BasicLib.h"
#include "CustomStack.h"
#include "Vector2Int.h"

int main()
{

//	CustomStack<char>* charStack = new CustomStack<char>();
//	(*charStack).Push(new char('a'));
//	(*charStack).Push(new char('b'));
//	(*charStack).Push(new char('c'));
//	printf("%d\n", (*charStack).Size());
//	printf("%c\n", *(*charStack).Pop());
//	
//	char** charArray = (*charStack).ToArray();
//	printf("%c, %c\n", *charArray[0], *charArray[1]);
//	
//	delete charStack;
//	delete charArray;
	
//	CustomStack<char>* charStack = new CustomStack<char>();
//	charStack->Push(new char('a'));
//	charStack->Push(new char('b'));
//	charStack->Push(new char('c'));
//	printf("%d\n", charStack->Size());
//	printf("%c\n", *(charStack->Pop()));
//	
//	char** charArray = charStack->ToArray();
//	printf("%c, %c\n", *charArray[0], *charArray[1]);
//	
//	delete charStack;
//	delete charArray;
	
	
//	CustomStack<Vector2Int>* v2dStack = new CustomStack<Vector2Int>();
//	(*v2dStack).Push(new Vector2Int(0, 0));
//	(*v2dStack).Push(new Vector2Int(0, 1));
//	(*v2dStack).Push(new Vector2Int(0, 2));
//	
//	Vector2Int* popValue = (*v2dStack).Pop();
//	printf("%d\n", (*popValue).y);
//	delete popValue;
//	
//	Vector2Int* peekValue = (*v2dStack).Peek();
//	printf("%d\n", (*peekValue).y);
//	
//	printf("%d\n", (*v2dStack).Size());
//	
//	Vector2Int** v2dArray = (*v2dStack).ToArray();
//	printf("%d, %d\n", (*v2dArray[0]).y, (*v2dArray[1]).y);
//	delete v2dArray;
//	
//	delete v2dStack;
	
	
	CustomStack<Vector2Int>* v2dStack = new CustomStack<Vector2Int>();
	v2dStack->Push(new Vector2Int(0, 0));
	v2dStack->Push(new Vector2Int(0, 1));
	v2dStack->Push(new Vector2Int(0, 2));
	
	Vector2Int* popValue = v2dStack->Pop();
	printf("%d\n", popValue->y);
	delete popValue;
	
	Vector2Int* peekValue = v2dStack->Peek();
	printf("%d\n", peekValue->y);
	
	printf("%d\n", v2dStack->Size());
	
	Vector2Int** v2dArray = v2dStack->ToArray();
	printf("%d, %d\n", v2dArray[0]->y, v2dArray[1]->y);
	delete v2dArray;
	
	delete v2dStack;
	
}


