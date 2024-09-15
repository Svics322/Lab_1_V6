#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1_1/Truth.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CheckConjuction)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkConjuction(), 0);
		}
		TEST_METHOD(CheckDisjuction)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkDisjunction(), 1);
		}
		TEST_METHOD(CheckExcConjunction)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkExcConjuction(), 1);
		}
		TEST_METHOD(CheckFirstImplication)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkFirstImplication(), 0);
		}
		TEST_METHOD(CheckSecondImplication)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkSecondImplication(), 1);
		}
		TEST_METHOD(CheckEquality)
		{
			bool p = true, q = false;
			Truth truth = Truth(p, q);
			Assert::AreEqual((int)truth.checkEquality(), 0);
		}
	};
}
