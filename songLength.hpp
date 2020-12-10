#ifndef _SONG_LENGTH_HPP
#define _SONG_LENGTH_HPP
#include "strategy.hpp"

#include <iostream>
#include <vector>

class songLength : public Strategy{
    public:
	
	songLength(HipHopPlaylist* playlist){
	    playlist = playlist;
	}

        songLength(EDMPlaylist* playlist){
            playlist = playlist;
        }

        songLength(PopPlaylist* playlist){
            playlist = playlist;
        }

        songLength(LoFiPlaylist* playlist){
            playlist = playlist;
        }

        songLength(RnBPlaylist* playlist){
            playlist = playlist;
        }

        songLength(NaturalPlaylist* playlist){
            playlist = playlist;
        }

	void display(){
	    //sort(playlist.begin(), playlist.end(), compare);
	    vector<double> length = playlist->getTimes();
            vector<string> artist = playlist->getArtists();
            vector<double> song = playlist->getSongs();
	 
	    for(unsigned int i = 0; i < playlist->size(); i++){
		cout << song.at(i) << "    " 
		     << artist.at(i) << "    "
		     << length.at(i) << endl;
	    }
	}
  
	void selectionSort(){  
	    vector<double> length = playlist->getTimes();
	    vector<string> artist = playlist->getArtists();
	    vector<double> song = playlist->getSongs();
	    for (int j = 0; j < playlist->size() - 1; ++j) {
		int min = j;
    		for (int i = j+1; i < length.size(); ++i) {
        	    if (length.at(min) > length.at(i)) {
            		min = i;
        	    }

    		}
	    }
    	    if (min != j){
        	swap(length.at(j), length.at(min));
		swap(artist.at(j), artist.at(min));
		swap(song.at(j), song.at(min));
	    }

	}

    private:
	//bool compare(string a, string b){
	//    return a < b; 
	//}
	HipHopPlaylist* playlistH;
	EDMPlaylsit* playlsitE;
	PopPlaylist* playlistP;
	LoFiPlaylsit* playlistL;
	RnBPlaylist* playlistR;
	NaturalPlaylist* playlistN;
	
};
#endif //_SONG_LENGTH_HPP_
	
		
