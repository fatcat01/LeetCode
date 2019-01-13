// 0048. Rotate Image.cpp: 定义控制台应用程序的入口点。
//

#include "0048. Rotate Image.h"

#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

void PrintMatrix(const vector<vector<int>> &matrix);

TEST_CASE("Rotate Image", "[rotate]")
{
	Solution solution;

	SECTION("1")
	{
		vector<vector<int>> matrix{
			{ 1,2,3 },
			{ 4,5,6 },
			{ 7,8,9 }
		};
		solution.rotate(matrix);
		PrintMatrix(matrix);
	}
	SECTION("2")
	{
		vector<vector<int>> matrix{
			{ 15,13,2,5 },
			{ 14,3,4,1 },
			{ 12,6,8,9 },
			{ 16,7,10,11 }
		};
		solution.rotate(matrix);
		PrintMatrix(matrix);
	}

	system("pause");
}

void PrintMatrix(const vector<vector<int>> &matrix)
{
	cout << "[ " << endl;
	for (auto item : matrix)
	{
		cout << " [ ";
		for (auto m : item)
		{
			cout << m << " ";
		}
		cout << " ] " << endl;
	}
	cout << "] " << endl;
}

