#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1_2/Truth.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(checkOR)
		{
			Truth_6 truth = Truth_6("110011001", "101011010");
			long long a, b;
			truth.calcDisjunction();
			a = stol(truth.getOR());
			b = 111011011;
			Assert::AreEqual(a, b);
		}
		TEST_METHOD(checkAND)
		{
			Truth_6 truth = Truth_6("110011001", "101011010");
			long long a, b;
			truth.calcConjunction();
			a = stol(truth.getAND());
			b = 100011000;
			Assert::AreEqual(a, b);
		}
		TEST_METHOD(checkXOR)
		{
			Truth_6 truth = Truth_6("110011001", "101011010");
			long long a, b;
			truth.calcExcConjunction();
			a = stol(truth.getXOR());
			b = 11000011;
			Assert::AreEqual(a, b);
		}
	};
}
