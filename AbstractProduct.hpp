#ifndef _ABSTRACTPLAYLIST_HPP_
#define _ABSTRACTPLAYLIST_HPP_

#include <iostream>
#include <string>

using namespace std;

class Playlist {
    public:
        Playlist() {};
        virtual string getTitle() = 0;

};

#endif //_ABSTRACTPLAYLIST_HPP_ 
