#include "Sort.h"
#include <iostream>
void MyCounting_Sort(std::vector<int>& _A, int _Max)
{
	std::vector<int> C(_Max + 1);
	std::vector<int> B(_A.size());
	int min = 0;
	for (int i = 0; i < _A.size(); i++)
		C[_A[i]] = C[_A[i]] + 1;
	//	for (int i = 0; i < C.size(); i++) std::cout << C[i] << " ";
	//	std::cout << std::endl;
	for (int i = 1; i < C.size(); i++)
		C[i] += C[i - 1];
	//	for (int i = 0; i < C.size(); i++) std::cout << C[i] << " ";
	for (int i = _A.size() - 1; i >= 0; i--)
	{
		B[C[_A[i]] - 1] = _A[i];
		C[_A[i]]--;
	}
	_A = B;
	//	std::cout << std::endl;
	//for (int i = 0; i < B.size(); i++) std::cout << B[i] << " ";
}
