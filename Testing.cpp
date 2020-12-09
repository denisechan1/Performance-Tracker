#include "gtest/gtest.h"

#include "FactoryTests.hpp"
#include "add_task_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
