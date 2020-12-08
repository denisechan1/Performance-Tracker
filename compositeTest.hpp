#ifndef __COMPOSITE_TEST_HPP__
#define __COMPOSITE_TEST_HPP__

#include "Category.hpp"
#include "UserGuide.hpp"
#include "Task.hpp"

#include "gtest/gtest.h"



TEST(AddTest, AddCategory) {
  Category* test = new Category("test", 1, 2);
  Category* subcat = new Category("subcat", 1, 2);

  test->add(subcat);

  EXPECT_EQ(test->at(0), subcat);
}

TEST(AddTest, AddTask) {
  Category* test = new Category("test", 1, 2);
  Task* task = new Task("task", 1, 2);

  test->add(task);

  EXPECT_EQ(test->at(0), task);
}

TEST(AddTest, AddMultItems) {
    Category *finalStudy = new Category("study", 1, 1);
    Task* english = new Task("english", 1, 2);
    Task* cs = new Task("cs", 1, 2);
    Task* calc = new Task("calc", 1, 2);
    Task* biology = new Task("biology", 1, 2);
    Task* chem = new Task("chem", 1, 2);
    Task* physic = new Task("physics", 1, 2);
    Task* algrebra =new Task("algebra", 1, 2);
    Category *math = new Category("math", 1, 2);
    Category *science = new Category("science", 1, 2);
    finalStudy->add(english);
    finalStudy->add(cs);
    finalStudy->add(math);
    math->add(calc);
    math->add(algrebra);       
    finalStudy->add(science);
    science->add(biology);
    science->add(chem);
    science->add(physic);
    test->add(subcat);

  EXPECT_EQ(finalStudy->at(2), math);
  EXPECT_EQ(math->at(1), algebra);
}

TEST(calculateTimeEachDay, OneCategory) {
  Category* test = new Category("test", 5, 10);
  
}

TEST(calculateTimeEachDay, TwoCategories) {
  
}

#endif
