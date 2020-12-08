#ifndef __COMPOSITE_TEST_HPP__
#define __COMPOSITE_TEST_HPP__

#include "Category.hpp"
#include "UserGuide.hpp"
#include "Task.hpp"
#include "gtest/gtest.h"


TEST(AddTest, AddCategory) {
  Category* test = new Category("test", 1, 2);
  Category* subcat = new Category("subcat", 0, 0);

  test->add(subcat);

  EXPECT_EQ(test->at(0), subcat);
}

TEST(AddTest, AddTask) {
  Category* test = new Category("test", 1, 2);
  Task* task = new Task("task");

  test->add(task);

  EXPECT_EQ(test->at(0), task);
}

TEST(AddTest, AddMultItems) {
    Category *finalStudy = new Category("study", 1, 1);
    Task* english = new Task("english");
    Task* cs = new Task("cs");
    Task* calc = new Task("calc");
    Task* biology = new Task("biology");
    Task* chem = new Task("chem");
    Task* physic = new Task("physics");
    Task* algebra =new Task("algebra");
    Category *math = new Category("math", 1, 2);
    Category *science = new Category("science", 1, 2);
    finalStudy->add(english);
    finalStudy->add(cs);
    finalStudy->add(math);
    math->add(calc);
    math->add(algebra);       
    finalStudy->add(science);
    science->add(biology);
    science->add(chem);
    science->add(physic);

  EXPECT_EQ(finalStudy->at(2), math);
  EXPECT_EQ(math->at(1), algebra);
}

TEST(calculateTimeEachDay, OneCategory) {
  Category* test = new Category("test", 5, 10);
  
}

TEST(calculateTimeEachDay, TwoCategories) {
  
}

#endif
