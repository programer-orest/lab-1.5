#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.5/lab 1.5/Fraction.h"
#include "../lab 1.5/lab 1.5/Fraction.cpp"
#include "../lab 1.5/lab 1.5/Pair.h"
#include "../lab 1.5/lab 1.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Pair a, b;
			Fraction test;
			a.Init(1, 5);
			b.Init(1, 5);
			Assert::AreEqual(test.ComparePairs(a, b), 3.);
		}
	};
}
