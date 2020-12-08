#include <iostream>
#include "Category.hpp"
#include "Task.hpp"
using namespace std;

Category::Category(string ttle, double hours, int days){
        title = ttle;
        hoursPerDay = hours;
        daysUntilDDay = days;
        maxDays = days;
}

void Category::add(UserGuide* task) {
        vec.push_back(task);
}

string Category::getName() {
        return title;
}

void Category::printGuide() {
  cout << endl;
  printSpace();
  cout << "Category: " << getName() <<endl;
    for (int i =0; i < vec.size();++i) {
      printSpace();
      vec.at(i)->printGuide();
    }
}

void Category::calculateTimeEachDay() {
  int temp;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec.at(i)->getMax() > temp) {
      temp = vec.at(i)->getMax();
    }
  }

}

double Category::outputTimer() {
  return hoursPerDay;
}

UserGuide* Category::at(int i) {
  return vec.at(i);
}

int Category::getMax() {
  return maxDays;
}            

