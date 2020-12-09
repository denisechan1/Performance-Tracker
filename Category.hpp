#ifndef __CATEGORY__
#define __CATEGORY__

#include <vector>
#include "UserGuide.hpp"

class Category : public UserGuide {
        public:
                Category(string, double, int);
                void calculateTimeEachDay();
                double outputTimer();
                void printGuide();
                string getName();
                int getMax();
                void  add(UserGuide*);
                void EnterNewGuide();
                UserGuide* AccessGuide();
                void changeSpace();
                UserGuide* at(int);
                void changeHPD(double);
                void changeMax(int);

        private:
                string title;
                int maxDays;
                double hoursPerDay;
                vector<UserGuide*> vec;
                int daysUntilDDay;
};

#endif
