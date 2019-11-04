#include "Sort.h"
void MyQuick_Sort(std::vector<double>& _A, int first, int last)
{
	double Mid;
	double 	Tmp;
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