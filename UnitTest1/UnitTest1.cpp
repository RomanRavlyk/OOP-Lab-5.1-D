#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 5.1 D/Pair.h"
#include "..//OOP Lab 5.1 D/Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Pair p(3, 5);
			Assert::AreEqual(3, p.getInt1());
		}
	};
}
