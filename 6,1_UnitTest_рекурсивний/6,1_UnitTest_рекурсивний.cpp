#include "pch.h"
#include "CppUnitTest.h"
#include "../6,1_рекурсивний/6,1_рекурсивний.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My61UnitTestрекурсивний
{
	TEST_CLASS(My61UnitTestрекурсивний)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int sum = 0;
			const int n = 25;
			int p[25] = { 21, 72, 45, 81, 45, 50, 39, 79, 62, 70, 65, 26, 38, 92, 40, 88, 58, 35, 44, 64, 73, 43, 15, 24, 37 };

			format_mas(p, n, sum, k, 0);

			Assert::AreEqual(13, k);
			Assert::AreEqual(604, sum);

		}
	};
}
