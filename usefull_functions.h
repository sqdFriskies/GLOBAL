#pragma once


namespace pipa
{
	void createRandArray(int* a, int n, int r = 10); 
	void createStrRandArray(char* a, int n);
	void printArray(int* a, int n);
	void swap(int& a, int& b);
	bool func_vanya1(const int* const a, const int n, int* sum, int* multi);
	void func_vanya2(int* a, int n, int* neg, int* pos, int* null, int q);
	void func_vanya3(int* a, int n, int* max, int* maxI);
}
