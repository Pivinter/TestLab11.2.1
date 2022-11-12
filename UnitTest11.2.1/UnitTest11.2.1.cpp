#include "pch.h"
#include "CppUnitTest.h"
#include "../TestLab11.2.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1121
{
	TEST_CLASS(UnitTest1121)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = main();
			Assert::AreEqual(t, 0);
		}
	};
}
