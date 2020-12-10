#ifndef __STRATEGY_HPP__
#define __STRATEGY_HPP__
#include <iostream>
#include <string>
#include "PlaylistSubclasses.hpp"

class Strategy{
    public:
        Strategy(Playlist* playlist){
            playlist = playlist;
	}
    
    private:
	Playlist* playlist;
};
#endif //__STRATEGY_HPP__ 
        
        
        
