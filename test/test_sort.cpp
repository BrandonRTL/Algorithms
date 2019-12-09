#include "Sort.h"
#include <gtest.h>
TEST(Sorts, quick_sort_is_correct)
{
	std::vector<int> B;
	B.push_back(0);
	B.push_back(3);
	B.push_back(3);
	B.push_back(4);
	B.push_back(1);
	B.push_back(2);
	std::vector<int> A = { 0, 1, 2, 3, 3, 4 };
	MyQuick_Sort(B, 0, 5);
	
	EXPECT_EQ(A, B);
}
TEST(Sorts, count_sort_is_correct)
{
	std::vector<int> B;
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
	std::vector<int> A = { 0, 1, 1, 1, 2, 2, 3, 3, 4 };

	EXPECT_EQ(A, B);
}
