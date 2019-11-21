#include <iostream>
#include "Sort.h"
//---------------------------------------------------------------------------
using namespace std;
int main()
{
	vector<int> B;
	B.push_back(0);
	B.push_back(3);
	B.push_back(3);
	B.push_back(1);
	B.push_back(1);
	B.push_back(1);
	B.push_back(2);
	B.push_back(2);
	B.push_back(4);
	MyCounting_Sort(B, 4);
	for (int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;
	return 0;
}
//-----------------------------------------------------------------------------