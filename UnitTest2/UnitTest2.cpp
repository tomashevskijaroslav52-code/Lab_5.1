// Test branch update
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double h(const double x, const double y)
{
    return (x * x + sin(x * y) + y * y) / (1 + x * x + y * y);
}

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double result = h(0, 0);
            Assert::AreEqual(result, 0.0, 0.001);
        }
    };
}