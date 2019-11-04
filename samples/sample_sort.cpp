#include <iostream>
#include "Sort.h"
//---------------------------------------------------------------------------
using namespace std;
int main()
{
	vector <double> A;
	A.push_back(1);
	A.push_back(3);
	A.push_back(-1);
	A.push_back(0);
	MyQuick_Sort(A, 0, A.size()-1);
	for (int i = 0; i < A.size(); i++)
	{
		std::cout << "  "<< A[i];
	}
	return 0;
}
//-----------------------------------------------------------------------------