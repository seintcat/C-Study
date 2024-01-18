#include "CustomStack.h"
#include "BasicLib.h"
#include "Vector2Int.h"

bool CheckPath(int x, int y, int** map)
{
	if(
	x < 0 ||
	y < 0 ||
	x > 5 ||
	y > 5)
	{
		return false;	
	}
	else
	{
		return map[y][x] < 1;
	}
}

int main()
{
	int** map = new int*[6]{
        new int[6]{2, 2, 2, 2, 2, 2}, 
        new int[6]{0, 0, 0, 0, 0, 2}, 
        new int[6]{2, 0, 2, 0, 2, 2}, 
        new int[6]{2, 2, 2, 0, 0, 0}, 
        new int[6]{2, 2, 2, 0, 2, 2}, 
        new int[6]{2, 2, 2, 2, 2, 2}    
    };
    
	Vector2Int moveVector[4] = 
	{
		Vector2Int(1, 0),
		Vector2Int(0, 1),
		Vector2Int(-1, 0),
		Vector2Int(0, -1)
	};
	
	CustomStack<Vector2Int>* pathStack = new CustomStack<Vector2Int>();
	Vector2Int* nowPos = new Vector2Int(0, 1);
	
	while(!(nowPos->x == 5 && nowPos->y == 3))
	{
		map[nowPos->y][nowPos->x] = 1;
		
		bool crossroads = false;
		for(int i = 0; i < 4; ++i)
		{
			if(CheckPath(nowPos->x + moveVector[i].x, nowPos->y + moveVector[i].y, map))
			{
				if(crossroads)
				{
					pathStack->Push(new Vector2Int(nowPos->x, nowPos->y));
				}
				nowPos->x += moveVector[i].x;
				nowPos->y += moveVector[i].y;
				crossroads = true;
			}
		}
		
		if(!crossroads)
		{
			printf("Find other way!\n");
			
			if(pathStack->Size() < 0)
			{
				printf("Error!\n");
				break;
			}
			Vector2Int* lastPos = pathStack->Pop();
			nowPos->x = lastPos->x;
			nowPos->y = lastPos->y;
			delete lastPos;
		}
	}
	
	for(int y = 0; y < 6; ++y)
	{
		for(int x = 0; x < 6; ++x)
		{
			printf("%d ", map[y][x]);
		}
		printf("\n");
	}
	
	delete nowPos;
	delete pathStack;
	
	for(int i = 0; i < 6; ++i)
	{
		delete[] map[i];
	}
	delete[] map;
}


