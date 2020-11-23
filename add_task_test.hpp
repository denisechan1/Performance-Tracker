#ifndef __ADD_TASK_TEST__
#define __ADD_TASK_TEST__

#include "gtest/gtest.h"

#include "Task.hpp"
#include "Category.hpp"

TEST (AddFeature, AddCategory) {
	UserGuide* root = Category(midterm, 0.5, 5);
	UserGuide* task1 = Task (calculus, 0.25, 8);
	root->add(tesk);
	
	EXPECT_EQ(root->at(0)->getName(), calculus);
}

#endif
