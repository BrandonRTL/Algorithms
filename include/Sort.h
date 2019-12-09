#ifndef __SORT_H__
#define __SORT_H__
#include <vector>;
#include <stack>;
template<typename ValType>
void MyQuick_Sort(std::vector<ValType>& _A, int first, int last)
{
	ValType Mid;
	ValType Tmp;
	int f = first;
	int l = last;
	Mid = _A[(f + l) / 2];
	do
	{
		while (_A[f]<Mid) f++;
		while (_A[l]>Mid) l--;
		if (f <= l)
		{
			Tmp = _A[f];
			_A[f] = _A[l];
			_A[l] = Tmp;
			f++;
			l--;
		}
	} while (f<l);
	if (first<l) MyQuick_Sort(_A, first, l);
	if (f<last) MyQuick_Sort(_A, f, last);
}
void MyCounting_Sort(std::vector<int>& _A, int R);
#endif