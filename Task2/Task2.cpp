#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task2
{
	TEST_CLASS(Task2)
	{
	public:
		//TEST_METHOD for value within the limit: setLength()
		TEST_METHOD(setLengthTest_1)
		{
			//Initializing lenght within 1 to 99
			int length = 5;

			//Variable to store the returning value from setLength function in main.c
			int returning_length = 0;

			//Function call of setLength
			setLength(length, &returning_length);

			//Comparing the obtained value from the setLength function to actual wanted result. If not, the test would fail
			Assert::AreEqual(5, returning_length);
		}

		//TEST_METHOD for value below the limit: setLength()
		TEST_METHOD(setLengthTest_2)
		{
			//Initializing length less than 1
			int length = -3;

			//Variable to store the returning value from setLength function in main.c
			int returning_length = 0;

			//Function call of setLength
			setLength(length, &returning_length);

			//Check to see if the lenght and returning lenght are same or not. If the lenght are same, the test would yeild failure
			//Using Assert::AreNotEqual to check for pass
			Assert::AreNotEqual(length, returning_length);
		}

		//TEST_METHOD for value above the limit: setLength()
		TEST_METHOD(setLengthTest_3)
		{
			//Initializing lenght greater than 99
			int length = 100;

			//Variable to store the returning value from setLength function in main.c
			int returning_length = 0;

			//Function call of setLength
			setLength(length, &returning_length);

			//Check to see if the lenght and returning lenght are same or not. If the lenght are same, the test would yeild failure
			//Using Assert::AreNotEqual to check for pass
			Assert::AreNotEqual(length, returning_length);
		}

		//TEST_METHOD for value within the limit: setWidth()
		TEST_METHOD(setWidthTest_1)
		{
			//Initializing width within 1 to 99
			int width = 7;

			//Variable to store the returning value from setWidth function in main.c
			int returning_width = 0;

			//Function call of setLength
			setLength(width, &returning_width);

			//Comparing the obtained value from the setWidth function to actual wanted result. If not, the test would fail
			Assert::AreEqual(7, returning_width);
		}

		//TEST_METHOD for value below the limit: setWidth()
		TEST_METHOD(setWidthTest_2)
		{
			//Initializing width less than 1
			int width = -8;

			//Variable to store the returning value from setWidth function in main.c
			int returning_width = 0;

			//Function call of setLength
			setLength(width, &returning_width);

			//Check to see if the lenght and returning lenght are same or not. If the lenght are same, the test would yeild failure
			//Using Assert::AreNotEqual to check for pass
			Assert::AreNotEqual(width, returning_width);
		}

		//TEST_METHOD for value above the limit: setWidth()
		TEST_METHOD(setWidthTest_3)
		{
			//Initializing width less than 1
			int width = 105;

			//Variable to store the returning value from setWidth function in main.c
			int returning_width = 0;

			//Function call of setLength
			setLength(width, &returning_width);

			//Check to see if the lenght and returning lenght are same or not. If the lenght are same, the test would yeild failure
			//Using Assert::AreNotEqual to check for pass
			Assert::AreNotEqual(width, returning_width);
		}
	};
}
