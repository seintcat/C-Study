#include<stdio.h>

template<typename T> class CustomStackNode
{
	public : 
	CustomStackNode* back;
	T nodeValue; 
	
	CustomStackNode(T inputValue)
	{
		back = NULL;
		nodeValue = inputValue;
	}
	~CustomStackNode()
	{
		printf("Delete node\n");
	}
};
 
template<typename T> class CustomStack
{
	private :
		CustomStackNode<T>* last;
		int size;
	
	public :  
		CustomStack()
		{
			last = NULL;
			size = 0;
		}  
		~CustomStack()
		{
			CustomStackNode<T>* remover;
			while(last != NULL)
			{
				remover = (*last).back;
				(*last).back = NULL;
				delete last;
				last = remover;
			}

//			CustomStackNode<T>* remover;
//			while(last != NULL)
//			{
//				remover = last;
//				last = (*last).back;
//				(*remover).back = NULL;
//				delete remover;
//			}

			printf("Delete stack\n");
		}
		
		void Push(T inputValue)
		{
			CustomStackNode<T>* newValue = new CustomStackNode<T>(inputValue);
			
			if(last != NULL)
			{
				(*newValue).back = last;
			}
			last = newValue;
			
			++size;
		}
		
		T Pop()
		{
			if(last != NULL)
			{
				--size;
				T someValue = (*last).nodeValue;
				CustomStackNode<T>* deleteValue = last;
				last = (*last).back;
				delete deleteValue;
				return someValue;
			}
			else
			{
				return NULL;
			}
		}
		
		bool IsEmpty()
		{
			return last != NULL;
		}	
		
		T Peek()
		{
			if(last != NULL)
			{
				return (*last).nodeValue;
			}
			else
			{
				return NULL;
			}
		}
		
		int Size()
		{
			return size;
		}
		
//		void Display()
//		{
//			
//		}
		
		T* ToArray()
		{
			T* array = new T[size];
			CustomStackNode<T> nowValue = *last;
			for(int i = 0; i < size; i++)
			{
				array[i] = nowValue.nodeValue;
				if(nowValue.back != NULL)
				{
					nowValue = *nowValue.back;
				}
			} 
			
			return array;
		}
};

int main()
{
	CustomStack<int>* intStack = new CustomStack<int>();
//	(*intStack).Push(0);
//	(*intStack).Push(1);
//	(*intStack).Push(2);
//	printf("%d\n", (*intStack).Size());
//	printf("%d\n", (*intStack).Pop());
//	printf("%d\n", (*intStack).Pop());

	(*intStack).Push(0);
	(*intStack).Push(1);
	(*intStack).Push(2);
	printf("%d\n", (*intStack).Size());
	printf("%d\n", (*intStack).Pop());
	
	int* intArray = (*intStack).ToArray();
	delete intStack;
	
	printf("%d, %d\n", intArray[0], intArray[1]);
	delete intArray;
}



