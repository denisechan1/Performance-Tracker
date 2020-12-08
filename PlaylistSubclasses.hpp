#ifndef _PLAYLISTSUBCLASSES_HPP_
#define _PLAYLISTSUBCLASSES_HPP_

#include "AbstractProduct.hpp"

#include <iostream>
#include <vector>

using namespace std;

class HipHopPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};


    public:
        HipHopPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

};

class EDMPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};


    public:
        EDMPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

};

class PopPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};



    public:
        PopPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

};

class LoFiPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};



    public:
        LoFiPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

};

class RnBPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};



    public:
        RnBPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

};

class NaturalPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};



    public:
        NaturalPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

};

#endif