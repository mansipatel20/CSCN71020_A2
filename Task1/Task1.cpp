#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int *, int *);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task1
{
	TEST_CLASS(Task1)
	{
	public:
		
		TEST_METHOD(perimeterCalculation)
		{
			int result = 0;
			int length = 3, width = 4;
			result = getPerimeter(&length, &width);

			Assert::AreEqual(14, result);
		}

		TEST_METHOD(areaCalculation)
		{
			int result = 0;
			int length = 3, width = 4;

			result = getArea(&length, &width);
			Assert::AreEqual(12, result);
		}
	};
}
