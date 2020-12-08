#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "UserGuide.hpp"

class Task : public UserGuide {
        public:
                Task(string, double, int);
                void calculateTimeEachDay();
                double outputTimer();
                void printGuide();
                string getName();
                int getMax();

        private:
                string title;
                int maxDays;
                int daysUntilDDay;
                double hoursPerDay;
};

#endif
