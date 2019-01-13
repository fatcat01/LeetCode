// 0344. Reverse String.cpp: 定义控制台应用程序的入口点。
//

#include "0344. Reverse String.h"

#define CATCH_CONFIG_MAIN
#include "../Catch2/single_include/catch.hpp"

void PrintMatrix(const vector<vector<int>> &matrix);

TEST_CASE("Reverse String", "[reverseString]")
{
	Solution solution;

	SECTION("1")
	{
		string s("hello"); 
		REQUIRE(solution.reverseString(s) == "olleh");		
	}
	SECTION("2")
	{
		string s("A man, a plan, a canal: Panama");
		REQUIRE(solution.reverseString(s) == "amanaP :lanac a ,nalp a ,nam A");
	}

	system("pause");
}

