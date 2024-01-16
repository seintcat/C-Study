#ifndef _CustomStack_

#define _CustomStack_
#include "BasicLib.h"

template<typename T> class CustomStackNode
{
	public : 
	CustomStackNode* back;
	T* nodeValue; 
	
	CustomStackNode(T* inputValue)
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
				if((*last).nodeValue != NULL)
				{
					delete (*last).nodeValue;
				}
				delete last;
				last = remover;
			}

			printf("Delete stack\n");
		}
		
		void Push(T* inputValue)
		{
			CustomStackNode<T>* newValue = new CustomStackNode<T>(inputValue);
			
			if(last != NULL)
			{
				(*newValue).back = last;
			}
			last = newValue;
			
			++size;
		}
		
		T* Pop()
		{
			if(last != NULL)
			{
				--size;
				T* someValue = (*last).nodeValue;
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
		
		T* Peek()
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
		
		T** ToArray()
		{
			T** array = new T*[size];
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

#endif




