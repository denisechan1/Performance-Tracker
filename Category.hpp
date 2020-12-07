#ifndef __CATEGORY__
#define __CATEGORY__

#include "UserGuide.hpp"

class Category : public UserGuide {
	public:
		Category(string, int, int);
		void calculateTimeEachDay();
		void outputTimer();
		string printGuide();
		string getName();
		void  add(UserGuide*);
		
	private:
		string title;
		int MaxDays;
		int hoursPerDay;
		vector<UserGuide*> vec;
		int daysUntilDDay;
};

#endif
