#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab051
{
	TEST_CLASS(UnitTestLab051)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double h;
			h = g(5, 3);	
			Assert::AreEqual(h, 49.0);
		}
	};
}
