#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.3_rec/lab_6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestProcessArray)
        {
            const int n = 5;
            int r[n] = { 20, -45, 33, -16, -89 };
            int expected_count = 3;


            int actual_count = negetiveellements(r, n);

            Assert::AreEqual(expected_count, actual_count);
        }
    };

    TEST_CLASS(UnitTest2)
    {
    public:
        TEST_METHOD(TestProcessArray)
        {
            const int n = 5;
            int r[n] = { 20, -45, 33, -16, -89 };
            int expected_count = 3;


            int actual_count = negetiveellementsT<int>(r, n);


            Assert::AreEqual(expected_count, actual_count);
        }
    };

}