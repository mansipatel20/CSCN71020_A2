#include "pch.h"
#include "CppUnitTest.h"

//Connecting the test project to base project, i.e. main.c
extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int *, int *);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task1
{
	TEST_CLASS(Task1)
	{
	public:
		//Test Method 1: getPerimeter function testing
		TEST_METHOD(perimeterCalculation)
		{
			//Declaring the result variable for storing the result
			int result = 0;
			//Declaring length and width of rectangle
			int length = 3, width = 4;

			//Getting the result using the getPerimeter function from main.c
			result = getPerimeter(&length, &width);

			//Comparing the obtained value from the getPerimeter function to actual wanted result
			Assert::AreEqual(14, result);
		}

		//Test Method 2: getArea function testing
		TEST_METHOD(areaCalculation)
		{
			//Declaring the result variable for storing the result
			int result = 0;
			//Declaring length and width of rectangle
			int length = 2, width = 6;

			//Getting the result using the getPerimeter function from main.c
			result = getArea(&length, &width);

			//Comparing the obtained value from the getPerimeter function to actual wanted result
			Assert::AreEqual(12, result);
		}
	};
}
