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
        changeMax(this->maxDays);
        changeHPD(this->outputTimer());
        this->calculateTimeEachDay();
}

string Category::getName() {
        return title;
}

void Category::printGuide() {
  cout << endl;
  cout << "Category: " << getName() << " (Total hours: " << hoursPerDay << ") " << endl;
    for (int i =0; i < vec.size();++i) {
      printSpace();
      vec.at(i)->printGuide();
    }
    cout << endl;
}

void Category::calculateTimeEachDay() {
  double temp =  hoursPerDay / vec.size();
  for (int i = 0; i < vec.size(); ++i) {
    vec.at(i)->changeHPD(temp);
    vec.at(i)->changeMax(this->maxDays);
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

void Category::changeHPD(double hpd) {
  this->hoursPerDay = hpd;
}

int Category::findItem(string s) {
  int num = -1;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec.at(i)->getName() == s) {
      num = i;
      break;
    }
  }
  return num;
}

void Category::changeMax(int max) {
  this->maxDays = max;
}