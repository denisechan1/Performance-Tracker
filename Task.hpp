#ifndef __TASK_HPP__
#define __TASK_HPP__

#include "UserGuide.hpp"

class Task : public UserGuide {
	public:
		Task();
		void calculateTimeEachDay();
		void outputTimer();
		string printGuide();

	private:
		string title;
		int maxDays;
		int daysUntilDDay;
		int hoursPerDay;
};

#endif
