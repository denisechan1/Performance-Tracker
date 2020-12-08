#include <iostream>
using namespace std;

#include "Task.hpp"

Task::Task(string ttle, double hours, int days) {
        title = ttle;
        hoursPerDay = hours;
        daysUntilDDay = days;
        maxDays = days;
}

string Task::getName() {
        return title;
}

void Task::calculateTimeEachDay() {
  
}

double Task::outputTimer() {
  return hoursPerDay;
}

void Task::printGuide() {
    printSpace();
    cout << getName() <<endl;
}

int Task::getMax() {
  return maxDays;
}

