#include <gtest/gtest.h>

#include <my_class.h>
#include <my_other_class.h>

TEST(TestMyClass, scMem)
{
	ASSERT_STREQ(MyClass::scMem, "Static Const Member");
}

TEST(TestMyOtherClass, constructor)
{
	ASSERT_STREQ(MyOtherClass::scOtherMem, "Static Const Member");
}
