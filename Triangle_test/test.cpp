#include "pch.h"
#include "lib_main.h"
#include <math.h>

TEST(DefaultConstructor, example_test) {
	Triangle t;
	EXPECT_EQ(t.get_side(), 1);
	EXPECT_EQ(t.get_height(), 1);
}

TEST(DefConstructorNegativeArg, example_test) {
	EXPECT_THROW(Triangle t(-1, 1),std::invalid_argument);
}
TEST(DefConstructorZeroArg, example_test) {
	EXPECT_THROW(Triangle t(0, 0), std::invalid_argument);
}
TEST(DefConstructorDoubleNegative, example_test) {
	EXPECT_THROW(Triangle t(-1, -1), std::invalid_argument);
}
TEST(ConstructorOneZero, example_test) {
	EXPECT_THROW(Triangle t(0, 5), std::invalid_argument);
	EXPECT_THROW(Triangle t(5, 0), std::invalid_argument);
}

TEST(ConstructorOneNegative, example_test) {
	EXPECT_THROW(Triangle t(-5, 10), std::invalid_argument);
	EXPECT_THROW(Triangle t(10, -5), std::invalid_argument);
}

TEST(ConstructorVerySmallPositive, example_test) {
	ASSERT_NO_THROW(Triangle t(pow(10, -300), pow(10, -300)));
}
TEST(GetSideAndHeight, example_test) {
	Triangle t(5,10);
	EXPECT_EQ(t.get_side(), 5);
	EXPECT_EQ(t.get_height(), 10);
}
TEST(SquareMethod, example_test) {
	Triangle t(5, 10);
	EXPECT_EQ(t.square(), 25);
}
TEST(SquareMethodNearNull, example_test) {
	Triangle t(pow(10,-100), pow(10,-200));
	EXPECT_EQ(t.square(), pow(10,-300)/2);
}
TEST(SquareMethodBigDigits, example_test) {
	Triangle t(pow(10,100), pow(10,200));
	EXPECT_EQ(t.square(), pow(10,300)/2);
}