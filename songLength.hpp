#ifndef _SONG_LENGTH_HPP
#define _SONG_LENGTH_HPP
#include "strategy.hpp"

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

class songLength : public Strategy{
    public:
	void display(Playlist playlist){
	    sort(playlist.begin(), playlist.end(), compare); 
	    for(unsigned int i = 0; i < playlist.size(); i++){
		cout << playlist.at(i);
	    }
    private:
	bool compare(string a, string b){
	    return a < b; 
	}
		
