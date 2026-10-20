#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.1/pr5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PR50
{
	TEST_CLASS(PR50)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			Assert::AreEqual(2.0, g(1, 0, 0));
		}
	};
}
