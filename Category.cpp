#include <iostream>
using namespace std;

#include "Category.hpp"

Category::Category(string ttle, int hours, int days){
	title = ttle;
	hoursPerDay = hours;
	daysUntilDDay = days;
	maxDays = days;
}

void Category::add(UserGuide* task) {
	vec.push_back(tesk);
}

string Category::getTitle() {
	return title;
}
