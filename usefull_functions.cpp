#include "usefull_functions.h"

#include <algorithm>
#include <iostream>

namespace pipa
{
	/**
	* @param a - pointer to array
	* @param n - length of array
	*/
	void createRandArray(int* a, int n, int r)
	{
		for (int i = 0; i < n; i++)
		{
			a[i] = -10 + std::rand() % r;
		}
	}

	void swap(int& a, int& b)
	{
		int j = a;
		a = b;
		b = j;
	}

	void printArray(int* a, int n)
	{
		for (int i = 0; i < n; i++)
		{
			std::cout << "a[" << i << "]=" << a[i] << " ";
		}
		std::cout << std::endl;
	}

	bool func_vanya1(const int* const a, const int n, int* psum, int* pmulti)
	{
		bool result = false;
		
		if (psum != nullptr && pmulti != nullptr)
		{
			*psum = 0;
			for (int i = 0; i < n; i++)
			{
				*psum += a[i];
			}

			*pmulti = 1;
			for (int i = 0; i < n; i++)
			{
				*pmulti *= a[i];
			}
			result = true;
		}

		return result;
	}

	void func_vanya2(int* a, int n, int* neg, int* pos, int* null,int q)
	{
		std::cout << "Положительные: ";
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				q++;
				/**pos = a[i];
				std::cout << *pos << " ";*/

			}
		}
		std::cout << q;
		std::cout << std::endl;
		std::cout << "Отрицательные: ";
		q = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				q++;
				/**neg = a[i];
				std::cout << *neg << " ";*/
			}

		}
		std::cout << q;
		std::cout << std::endl;
		std::cout << "Нулевые: ";
		q = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 0)
			{
				q++;
				/**null = a[i];
				std::cout << *null;*/
			}
		}
		std::cout << q << std::endl;

	}
	void func_vanya3(int* a, int n, int *max, int *maxI)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] > *max)
			{
				*max = a[i];
				*maxI = i;
			}
			
		}
		std::cout << "Максимальное число:" << *max <<std::endl<<"Индекс максимального числа:"<<*maxI;
	}
}
