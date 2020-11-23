#ifndef _ABSTRACTPLAYLIST_HPP_
#define _ABSTRACTPLAYLIST_HPP_

#include <iostream>
#include <string>

using namespace std;

class Playlist {
    private: 
        string title;

    public:
        Playlist() {};
        Playlist(string name){
            this->title = name;
        }

};

#endif //_ABSTRACTPLAYLIST_HPP_ 
