#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.22/lab6.22.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit622
{
	TEST_CLASS(unit622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 17;
			int r[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 };
			int min = 100;
			int max = -100;
			int imin = -100;
			int imax = 100;
			int t;
			t = sum(r, n, 0, 0, max, min, imax, imin);
			Assert::AreEqual(t, 16);
		}
	};
}
