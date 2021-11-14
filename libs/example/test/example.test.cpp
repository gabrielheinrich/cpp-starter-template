#include <gtest/gtest.h>
#include <example/example.h>

TEST(ExampleTest, Add)
{
  EXPECT_EQ(example::add(3, 5), 8);
}