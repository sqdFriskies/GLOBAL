
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <set>
#include "usefull_functions.h"
#include <windows.h>
#include <string>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;
namespace NMy
{


	void swap(int& a, int& b)
	{
		int j = a;
		a = b;
		b = j;
	}

	void task_3_3_1()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > 1)
		{
			y = 2;
		}
		else
		{
			y = 1 + x;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_2()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > 5)
		{
			y = 5 * x;
		}
		else
		{
			y = x + 5;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_3()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > 0)
		{
			y = 4 * x * x;
		}
		else
		{
			y = 5;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_4()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x <= 2)
		{
			y = x * x + 4 * x + 5;
		}
		else
		{
			y = 1 / (x * x + 4 * x + 5);
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_5()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x < -3)
		{
			y = (7 * x * x - 1) / (2 * x + 6);
		}
		else
		{
			y = 4 * x * x - 5;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_6()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > -4)
		{
			y = (5 * x * x + 2) / (x + 4);
		}
		else
		{
			y = 3 * x * x + 2;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_7()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x < -4)
		{
			y = (9 * x * x + 5) / (3 * x * x + 7);
		}
		else
		{
			y = 4 * x * x - 7;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_8()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > 5)
		{
			y = sqrt(7 * x * x + 6);
		}
		else
		{
			y = abs(x - 7);
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_9()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > 7)
		{
			y = 3 * x * x + 4 * x - 1;
		}
		else
		{
			y = 5;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_10()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x > -2)
		{
			y = (5 * x * x - 4) / (2 * x + 8);
		}
		else
		{
			y = 4 * x;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_11()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (abs(x) != 5)
		{
			y = (7 * x * x + 1) / (x * x - 25);
		}
		else
		{
			y = 7 * x + 6;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_12()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x < 2)
		{
			y = (4 * x * x + 7) / (3 * x - 6);
		}
		else
		{
			y = 4 * x * x + 1;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_13()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (abs(x) != 4)
		{
			y = (3 * x * x + 4) / (x * x - 16);
		}
		else
		{
			y = 0;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_14()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x >= -2)
		{
			y = sqrt(3 * x + 6);
		}
		else
		{
			y = 5;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_15()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (x < 5)
		{
			y = (7 * x * x + 6) / (x - 5);
		}
		else
		{
			y = (sqrt(x * x - 2)) / (x + 10);
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_16()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (abs(x) > 5)
		{
			y = x * x;
		}
		else
		{
			y = 5 * x;
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_3_17()
	{
		float x, y;
		std::cout << "x="; std::cin >> x;
		if (abs(x) >= sqrt(3))
		{
			y = sqrt(3 * x * x - 9);
		}
		else
		{
			y = abs(x);
		}
		std::cout << std::fixed; std::cout.precision(2);
		std::cout << "y=" << y;
	}
	void task_3_4_1_1()
	{
		int x, y;
		std::cout << "x="; std::cin >> x;
		std::cout << "y="; std::cin >> y;
		if (x > y)
		{
			std::cout << x;
		}
		else
			std::cout << y;
	}
	void task_3_4_1_2()
	{
		int x;

		std::cout << "x="; std::cin >> x;
		if (x % 7 == 0)
		{
			std::cout << "yes";
		}
		else
			std::cout << "no";

	}
	void task_3_4_1_3()
	{
		double A{}, B{};

		std::cout << "A = ";

		std::cin >> A;

		std::cout << "B = ";

		std::cin >> B;

		double temp = A;

		A = min(A, B), B = max(temp, B);

		std::cout << std::endl << std::endl << "A = " << A << std::endl << "B = " << B;

	}
	void task_4_17_1()
	{
		int a = 0;
		int b = 0;
		int c = 0;
		int n = 0;
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
		for (n = a; n <= b; n++)
		{
			if (n % c == 0)
				std::cout << n << " ";
		}
	}
	void task_4_17_2()
	{
		int n = 0;
		int m = 0;
		int b1 = 0;
		int b2 = 0;
		int i = 0;
		std::cin >> n;
		std::cin >> m;


		for (b1 = n; b1 <= m; b1++)
		{
			for (b2 = n; b2 <= m; b2++)
			{
				b1 % 2 == 0 && b1 % 3 == 0 && b1 % 5 == 0 && b1 % 7 == 0 && b1 % 11 == 0 && b2 % 2 == 0 && b2 % 3 == 0 && b2 % 5 == 0 && b2 % 7 == 0 && b2 % 11 == 0;

				if (b1 - b2 == 2 || b2 - b1 == 2)
					std::cout << b1 << " " << b2 << std::endl;
			}
		}

	}
	void task_6_4_2()
	{
		srand(time(0));
		int const n = 10;
		int i, a[n], x;
		std::cin >> x;
		int a1 = x;
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 8;
			std::cout << a[i] << " ";
		}
		for (i = n - 1; i >= 0; i--)
		{
			if (a[i] > 0)
			{
				a1 = a[i];
			}
		}
		std::cout << std::endl;
		if (a1 == x)std::cout << "Yes";
		else
			std::cout << "No";
	}
	void task_6_4_3()
	{
		srand(time(0));
		int const n = 5;
		int i, a[n], amin, nmin = 1;

		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 10;
			std::cout << a[i] << " ";
		}

		//////////////////////////////////
		for (i = 0; i < n; i++)
		{
			if (nmin == 1 || a[i] <= amin)
			{
				amin = a[i]; nmin = i;
			}

		}
		std::cout << std::endl;
		if (nmin == 1)std::cout << "net";
		else std::cout << amin << " " << nmin;
	}
	void task_6_5()
	{
		srand(time(0));
		int i;
		int const n = 10;
		int a[n];
		int b[n];
		int c[n];

		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 10;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;

		for (i = 0; i < n; i++)
		{
			b[i] = rand() % 10;
			std::cout << b[i] << " ";
		}
		std::cout << std::endl;


		//////////////////////////////////////
		for (i = 0; i < n; i++)
		{
			c[i] = (a[i] + b[i]) / 2;
			std::cout << c[i] << " ";
		}

	}
	void task_6_6()

	{
		setlocale(LC_ALL, "Russian");
		srand(time(0));
		int i = 0;
		int const n = 5;
		int a[n];
		int k = 0;
		int m = 0;
		std::cin >> m;
		std::cin >> k;
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 20;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;


		//---------------
		for (i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
				a[i] = a[i] - m;

			if (i % 2 != 0)
			{
				a[i] = a[i] + k;
			}
		}
		std::cout << std::endl;
		//--------------

		for (i = 0; i < n; i++)
		{
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
	void task_6_7_1()
	{
		//Дано цілочисельний масив у якого кількість елементів кратна 5.
		//У кожній п'ятірці поміняйте місцями елементи таким чином: перший з четвертим,
		//другий з п'ятим (було 1 2 3 4 5 6 7 8 9 10 стало 4 5 3 1 2 9 10 8 6 7). Третій елемент не переставляється.


		srand(time(0));
		int const n = 10;
		int i = 0;
		int p = 0;
		int a[n];
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 11; n % 5 == 0;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;


	}
	void task_6_7_2()
	{
		float a[8];




		int n; std::cout << "n="; std::cin >> n;  //задаём размерность массива
		for (int i = 1; i <= n; i++) { //присваиваем каждому элементу массива свой порядковый номер (для удобства проверки работы алгоритма) 
			std::cout << "a[" << i << "]="; std::cin >> a[i];
		}

		float min = a[0], max = a[0];
		int nmin = 0, nmax = 0;
		for (int i = 1; i < n; ++i)
		{
			if (a[i] < min) { min = a[i]; nmin = i; }
			a[nmax] = min;

		}
		for (int i = 1; i < n; ++i)
		{
			if (a[i] > max) { max = a[i]; nmax = i; }
			a[nmin] = max;
		}
		for (int i = 1; i < n; ++i)
			std::cout << a[i] << "\t";
	}

	void task_6_8_1()
	{
		/*
			Дано цілочисельний масив. Вилучити з цього масиву останнє максимальне число.
		*/
		srand(time(0));
		int i = 0;
		int a[] = { 2,5,10,8,10,9 };
		int const n = (sizeof(a) / sizeof(a[0]));
		for (i = 0; i < n; i++)
		{
			/*a[i] = rand() % 10; */std::cout << a[i] << " ";
		}
		std::cout << "\n";



		int max = 0;
		int maxIdx = -1;
		for (i = 0; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				maxIdx = i;

			}
		}


		for (i = maxIdx; i < n - 1; i++)
		{
			a[i] = a[i + 1];
		}

		a[n - 1] = 0;
		for (i = 0; i < n - 1; i++)
		{
			std::cout << a[i] << " ";
		}
	}

	void task_6_8_1_vector()
	{
		/*
			Дано цілочисельний масив. Вилучити з цього масиву останнє максимальне число.
		*/
		srand(time(0));
		int i = 0;
		std::vector<int> a; //. = { 2,5,10,8,10,9 };
		a.push_back(2);
		a.push_back(5);
		a.push_back(10);
		a.push_back(8);
		a.push_back(10);
		a.push_back(9);

		for (i = 0; i < a.size(); i++)
		{
			/*a[i] = rand() % 10; */std::cout << a[i] << " ";
		}
		std::cout << "\n";



		int max = 0;
		int maxIdx = -1;
		for (i = 0; i < a.size(); i++)
		{
			if (a[i] >= max)
			{
				max = a[i];
				maxIdx = i;

			}

		}


		for (i = maxIdx; i < a.size() - 1; i++)
		{
			a[i] = a[i + 1];
		}

		a.resize(a.size() - 1);
		for (i = 0; i < a.size(); i++)
		{
			std::cout << a[i] << " ";
		}
	}
	void task_6_8_2()
	{
		/*Дано цілочисельний масив. Вилучити з цього масиву всі максимальні числа.*/
		srand(time(0));
		int const n = 10;
		int i = 0;
		int a[n];
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 11; std::cout << a[i] << " ";
		}
		std::cout << "\n";



		int max = 0;
		int maxIdx = 0;
		int m = 0;
		int j = 0;

		for (i = 0; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				maxIdx = i;

			}

		}
		for (i = n - m; i >= 0; i--)
		{
			if (a[i] >= max)
			{
				m++;
				for (j = i; j < n - 1; j++)
				{
					a[j] = a[j + 1];
				}
			}
		}
		for (i = 0; i < n - m; i++)
		{
			std::cout << a[i] << " ";
		}
	}
	void task_6_9_1()
	{
		/*Дано цілочисельний масив та число В. Вставити це число у масив після першого числа , яке кратне 3 або 5.*/
		srand(time(0));
		int const n = 10;
		int i = 0;
		int b = 0;
		int a[n + 1];
		std::cout << "b="; std::cin >> b;

		for (i = 0; i <= n; i++)
		{
			a[i] = rand() % 20;
			std::cout << a[i] << " ";
		}
		std::cout << "\n";
		for (i = n - 1; i >= 1; i--)
		{
			a[i + 1] = a[i];
		}
		if (b % 5 == 0 || b % 3 == 0)
		{
			a[1] = b;
		}


		for (i = 0; i < n + 1; i++)
		{
			std::cout << a[i] << " ";
		}
	}
	void task_6_9_2()
	{
		/*Дано цілочисельний масив та число В. Вставити це число у масив перед кожним числом, яке кратне 3 або 5.*/
		srand(time(0));
		int const n = 10;
		int a[2 * n];
		int b = 0;
		int i = 0;
		int j = 0;
		int m = 0;
		std::cout << "b="; std::cin >> b;
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 15;
			std::cout << a[i] << " ";
		}
		for (i = n - 1; i >= 0; i--)
		{
			if (a[i] % 5 == 0 || a[i] % 3 == 0)
			{
				for (j = n - 1 + m; j >= i; j--) a[j + 1] = a[j];
				a[i] = b; m++;
			}
		}
		std::cout << std::endl;
		for (i = 0; i < n + m; i++)
		{
			std::cout << a[i] << " ";
		}

	}
	void task_6_10_1()
	{
		/*Дано цілочисельний масив з 15 елементів. Відсортуйте його за спаданням. Після цього знайдіть найменший та найбільший елементи.*/
	}
	void task_6_10_2()
	{
		/*Дано цілочисельний масив з 15 елементів. Відсортуйте його за спаданням. Після цього знайдіть найменший та найбільший елементи.*/
	}

	void task_papa()
	{
		/*Даны 2 массива - a[n] и b[m], где n и m - размеры. Найди наибольшее в массиве a и наибольшее в массиве b и поменяй их местами в a и b*/
		srand(time(0));

		int const n = 5;
		int a[n];
		std::cout << "a[n] = ";
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 40 + 10;
			std::cout << a[i] << " ";
		}



		int const m = 5;
		int b[m];
		std::cout << "\n";
		std::cout << "b[m] = ";
		for (int i = 0; i < m; i++)
		{
			b[i] = rand() % 40 + 10;
			std::cout << b[i] << " ";
		}
		std::cout << "\n";


		int maxIdx = 0;		
		{
			int max = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
					maxIdx = i;
				}
			}
		}
	
	

		int maxIdxB = 0;		
		{
			int maxB = 0;

			for (int i = 0; i < m; i++)
			{
				if (b[i] > maxB)
				{
					maxB = b[i];
					maxIdxB = i;

				}
			}
		}
		
		{
			int temp = a[maxIdx];
			a[maxIdx] = b[maxIdxB];
			b[maxIdxB] = temp;
		}


	
	
		std::cout << "a[n] = ";
		for (int  i = 0; i < n; i++)
		{
			if (i != n - 1)
				std::cout << a[i] << " ";
			else
				std::cout << a[i] << std::endl;
		}

		std::cout << "b[m] = ";
		for (int i = 0; i < m; i++)
		{
			if (i != m - 1)
				std::cout << b[i] << " ";
			else
				std::cout << b[i] << std::endl;
		}
		


		


	
	}
	void task_papa1()
	{
		/*Заполнить массив а размерностью n случайными значениями.Заполнить массив b размером n значениями из массива a в обратном порядке.*/

		int const n = 5;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 40 + 10;
		}
		std::cout << std::endl;


		int b[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = a[i];
		}

		int j = 0;
		for (int i = n - 1; i > -1; i--)
		{
			b[j] = a[i];
			j = j + 1;
		}
		
		std::cout << "array a: n=" << n << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "a[" << i << "]=" << a[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "array b: n=" << n << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "b[" << i << "]=" << b[i] << " ";
		}
		std::cout << std::endl;

	}
	void task_papa2()
	{
		/*Заполнить массив а размерностью n случайными значениями. Поменять местами значения первого(индекс 0) и последнего (индекс n-1 ) элементов*/
		int const n = 5;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 40 + 10;
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;

		int j = 0;
		{
			//j = a[0];
			//a[0] = a[n - 1];
			//a[n - 1] = j;
			swap(a[0], a[n - 1]);
		}
		

		for (int i = 0; i < n; i++)
		{
			std::cout << a[i] << " ";
		}
	}
	void task_papa3()
	{
		/*В задаче 2 поменять все значения элементов (первый и последний, второй и предпоследний и т.д.)*/
		int const n = 5;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 40 + 10;
		}
		std::cout << std::endl;


		int b[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = a[i];
		}

		int j = 0;
		for (int i = n - 1; i > -1; i--)
		{
			b[j] = a[i];
			j = j + 1;
		}

		std::cout << "array a: n=" << n << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "a[" << i << "]=" << a[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "array b: n=" << n << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << "b[" << i << "]=" << b[i] << " ";
		}
		std::cout << std::endl;
	}
}
void task_papa4()
{
	/*Заполнить двумерный массив а размерностью n и m случайными значениями.*/
	int const n = 5;
	int const m = 5;
	int a[n][m];
	std::cout << "a[n][m]= ";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 20;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			std::cout << a[i][j] << " ";
		}
	}
}
void task_papa5()
{
	/* Заполнить двумерный массив а размерностью n и m случайными значениями. Переписать все значения из массива a в одномерный массив b размером n*m.*/
	int const n = 3;
	int const m = 3;
	int a[n][m];
	int b[n * m];

	std::cout << "a[n][m] = " << std::endl;



	for (int i = 0; i < n; i++)//заполнение массива
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 20;
		}
	}

	for (int i = 0; i < n; i++)//вывод массива
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << a[i][j] << " ";

		}
		std::cout << std::endl;
	}


	for (int i = 0; i < n; i++)//присваивание нужного значения
	{
		for (int j = 0; j < m; j++)
		{
			b[i * n + j] = a[i][j];

		}
	}

	std::cout << "b[n * m] =";
	for (int i = 0; i < n; i++)//вывод должным образом 
	{
		for (int j = 0; j < m; j++)
		{
			std::cout << b[i * n + j]<<" ";
		}

	}


}
void task_papa6()
{
	/* Заполнить массив а размерностью n случайными значениями. Найти максимальное и минимальное значение и поменять их местами. Остальные  значения установить в ноль.*/
	int const n = 5;
	int a[n];
	int m = 0;
	std::cout << "a[n] = ";
	for (int i = 0; i < n; i++)//заполнение массива
	{

		a[i] = rand() % 20;

	}
	for (int i = 0; i < n; i++)//вывод массива
	{

		std::cout << a[i] << " ";


	}
	std::cout << std::endl;



	
		int max = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[max])
			{
				max = i;
			}
		}
	

	
		int min = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i] < a[min])
			{
				min = i;
			}
		}
	
	std::swap(a[max], a[min]);

	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[max] && a[i] != a[min])
		{
			a[i] = 0;
		}
		std::cout << a[i] << " ";
	}
}
void task_papa7()
{
	/*Есть массив с n элементами. Заполнить массив случайными числами. Поменять в массиве все элементы в обратном порядке. Написать функцию этой смены ( arrayreverse ). */
	int const n = 6;
	int a[n];
	pipa::createRandArray(a, n, 20);
	pipa::printArray(a, n);

	for (int i = 0; i < n/2; i++)
	{
		int tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
	pipa::printArray(a, n);

}
void task_vanya1()
{
	/*Написать функцию, которая получает указатель на массив и его размер и возвращает сумму и произведение его элементов в двух параметрах-указателях.*/
	int const n = 5;
	int a[n];
	int summ = 0;
	int multi = 1;



	pipa::createRandArray(a, n);
	pipa::printArray(a, n);
	
	if (pipa::func_vanya1(a, n, &summ, &multi))
	{
		std::cout << "Сумма= " << summ << std::endl;
		std::cout << "Произведение= " << multi << std::endl;

	}
	else
	{
		std::cout<<" Ошибка.";
	}


	
}
void task_vanya2()
{
	/*Написать функцию, которая получает указатель на массив и его размер и возвращает количество отрицательных, положительных и нулевых элементов массива.(
	- исправить так же, 
	- убрать указатели вводных данных вне функции
	- добавить проверку указателя на ноль
	-
	*/
	int const n = 5;
	int a[n];
	int pos = 1, neg = 1, null=1;
	int *pneg= &neg;
	int *ppos= &neg;
	int *pnull= &neg;
	int q = 0;
	pipa::createRandArray(a, n, 20);
	pipa::printArray(a, n);
	pipa::func_vanya2(a, n, pneg, ppos, pnull, q);


}
void task_vanya3()
{
	/*Написать функцию, которая принимает массив и возвращает 2 результата - индекс максимального элемента и его значение*/
	int const n = 5;
	int a[n];
	int max = 0;
	int maxI = 0;
	int *pmax = &max;
	int *pmaxI = &maxI;
	pipa::createRandArray(a, n, 20);
	pipa::printArray(a, n);
	pipa::func_vanya3(a, n, pmax,pmaxI);
}
void task_papa8()
{
	/*char str[n] = {'a', 'b', 'c', 'd',1};
	char b = 99;
	std::cout << "b" <<" "<< 'b'<< " " << str <<std::endl;*/

	/* Сгенерировать маленькие рандомные буквы в массиве a длиной n */
	/**/
	int const n = 19;
	char a[n];
	for (int i = 0; i < n; i++)
	{

		a[i] = 97 + rand() % 25;

	}
	for (int i = 0; i < n; i++)//вывод массива
	{

		std::cout << a[i] << " ";


	}
	std::cout << std::endl;
	char pipa = 3;
	char b[n] = { 'g','a','r','i','k',' ','a','n','d',' ','n','i','k','a',' ','m','y',' ' };
	std::cout << b << pipa;
}


	
void task_knb()
{


	int k = 0;//0-камень
	int n = 0;//1-ножницы
	int b = 0;//2-бумага
	
	enum ETypeGame
	{
		ERock = 0,
		EScissors = 1,
		EPaper = 2
	};


	int inme;
	int NumberWin = 0;
	int NumberLoss = 0;
	int NumberDraw = 0;
	for (int i = 0; i < 3; i++) {
		std::cout << "0 - камень, 1 - ножницы, 2 - бумага" << std::endl;
		std::cout << "Введите число от 0 до 2: ";
		std::cin >> inme;

		
		if (inme > 2)
		{
			std::cout << "Вы ввели не то значение.";
			exit;
		}

		ETypeGame me = static_cast<ETypeGame>(inme);
		ETypeGame comp = (ETypeGame)(rand() % 3);

		std::cout << "Число компьютера = " << comp << std::endl;

		if ((comp == ERock && me == EPaper) || (comp == EScissors && me == ERock) || (comp == EPaper && me == EScissors))
		{
			std::cout << "Вы выиграли.";
			NumberWin++;
		}
		else if ((comp == EPaper && me == ERock) || (comp == ERock && me == EScissors) || (comp == EScissors && me == EPaper))
		{
			std::cout << "Вы проиграли.";
			NumberLoss++;
		}
		else if (comp == me)
		{
			std::cout << "Ничья.";
			NumberDraw++;
		}

		Sleep(2000);
		system("cls");
	}
	std::cout << "Вы выиграли " << NumberWin << " Раз."<<std::endl;
	std::cout << "Вы проиграли "<< NumberLoss << " Раз." << std::endl;
	std::cout << "Ничья была " << NumberDraw << " Раз.";

		
	

}

void task_1()
{
	int const n = 5;
	int a[n];
	int i;
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}

	sort(a, a + i);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}


int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	//task_3_3_1();
	//task_3_3_2();
	//task_3_3_3();
	//task_3_3_4();
	//task_3_3_5();
	//task_3_3_6();
	//task_3_3_7();
	//task_3_3_8();
	//task_3_3_9();
	//task_3_3_10();
	//task_3_3_11();
	//task_3_3_12();
	//task_3_3_13();
	//task_3_3_14();
	//task_3_3_15();
	//task_3_3_16();
	//task_3_3_17();
	//task_3_4_1_1();
	//task_3_4_1_2();
	//task_3_4_1_3();
	//task_4_17_1();
	//task_4_17_2();
	//task_6_4_2();
	//task_6_4_3();
	//task_6_5();
	//task_6_6();
	//task_6_7_1();
	//task_6_7_2();
	//task_6_8_1_vector();
	//task_6_8_2();
	//task_6_9_1();
	//task_6_9_2();
	//task_papa();
	//task_papa1();
	//task_papa2();
	//task_papa3();
	//task_papa4();
	//task_papa5();
	//task_papa6();
	//task_papa7();
	//task_vanya1();
	//task_vanya2();
	//task_vanya3();
	//task_papa8();
	//task_knb();
	task_1();
	system("pause");
}
