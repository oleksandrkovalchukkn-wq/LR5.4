#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.4/LR5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int K = 1, N = 15;

			double expected = S0(K, N);

			Assert::AreEqual(expected, S1(K, N, K), 0.00001);
			Assert::AreEqual(expected, S2(K, N, N), 0.00001);
			Assert::AreEqual(expected, S3(K, N, K, 0), 0.00001);
			Assert::AreEqual(expected, S4(K, N, N, 0), 0.00001);
		}
	};
}