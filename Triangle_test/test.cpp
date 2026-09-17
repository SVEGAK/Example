#include "pch.h"
#include "lib_main.h"


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
TEST(GetSideAndHeight, example_test) {
	Triangle t(5,10);
	EXPECT_EQ(t.get_side(), 5);
	EXPECT_EQ(t.get_height(), 10);
}
TEST(SquareMethod, example_test) {
	Triangle t(5, 10);
	EXPECT_EQ(t.square(), 25);
}