#ifndef __CATEGORY__
#define __CATEGORY__

#include "UserGuide.hpp"

class Category : public UserGuide {
	public:
		Category();
		void calculateTimeEachDay();
		void outputTimer();
		string printGuide();
		void  add(UserGuide*);
		
	private:
		string title;
		int MaxDays;
		int hoursPerDay;
		vector<UserGuide*> vec;
		int daysUntilDDay;
};

#endif
