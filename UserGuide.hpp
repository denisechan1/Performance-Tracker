#ifndef __USER_GUIDE_HPP__
#define __USER_GUIDE_HPP__

class UserGuide {
	public: 
		virtual void outputTimer() = 0;
		virtual void calculateTimeEachDay() = 0;
		virtual string printGuide() = 0;
};

#endif
