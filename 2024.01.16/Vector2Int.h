#ifndef _Vector2Int_

#define _Vector2Int_

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

#endif
