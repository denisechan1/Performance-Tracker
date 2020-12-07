#include <iostream>
using namespace std;

#include "Task.hpp"

void Task::Task(string ttle, int hours, int days) {
	title = ttle;
	hoursPerDay = hours;
	daysUntilDDay = days;
	maxDays = days;
}

string Task::getName() {
	return title;
}


