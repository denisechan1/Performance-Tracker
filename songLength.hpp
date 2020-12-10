#ifndef _SONG_LENGTH_HPP
#define _SONG_LENGTH_HPP
#include "strategy.hpp"

#include <iostream>
#include <vector>

class songLength : public Strategy{
    public:
	 songLength() {} ;
        songLength(HipHopPlaylist* playlist){
            playlistH = playlist;
            vector<double> length = playlistH->getTimes();
    	    vector<string> artist = playlistH->getArtists();
    	    vector<string> song = playlistH->getSongs();
        }

        songLength(EDMPlaylist* playlist){
            playlistE = playlist;
            vector<double> length = playlistE->getTimes();
    	    vector<string> artist = playlistE->getArtists();
    	    vector<string> song = playlistE->getSongs();
        }

        songLength(PopPlaylist* playlist){
            playlistP = playlist;
            vector<double> length = playlistP->getTimes();
    	    vector<string> artist = playlistP->getArtists();
    	    vector<string> song = playlistP->getSongs();
        }

        songLength(LoFiPlaylist* playlist){
            playlistL = playlist;
            vector<double> length = playlistL->getTimes();
    	    vector<string> artist = playlistL->getArtists();
    	    vector<string> song = playlistL->getSongs();
        }

        songLength(RnBPlaylist* playlist){
            playlistR = playlist;
            vector<double> length = playlistR->getTimes();
    	    vector<string> artist = playlistR->getArtists();
    	    vector<string> song = playlistR->getSongs();
        }

        songLength(NaturalPlaylist* playlist){
            playlistN = playlist;
            vector<double> length = playlistN->getTimes();
    	    vector<string> artist = playlistN->getArtists();
    	    vector<string> song = playlistN->getSongs();
        }

		void display(){			
			for(unsigned int i = 0; i < song.size(); i++){
				cout << song.at(i) << "    " << artist.at(i) << "    " << length.at(i) << endl;
			}
		}
	
		void selectionSort(){  
			for (int j = 0; j < length.size() - 1; ++j) {
				int min = j;
				for (int i = j+1; i < length.size(); ++i) {
					if (length.at(min) > length.at(i)) {
						min = i;
					}
				}
				if (min != j){
					swap(length.at(j), length.at(min));
					swap(artist.at(j), artist.at(min));
					swap(song.at(j), song.at(min));
				}
			}

		}

		vector<string> getS(){
            return this->song;
        }

        vector<string> getA(){
        return this->artist;
        }

        vector<double> getL(){
        return this->length;
        }

    private:
		HipHopPlaylist* playlistH;
		EDMPlaylist* playlistE;
		PopPlaylist* playlistP;
		LoFiPlaylist* playlistL;
		RnBPlaylist* playlistR;
		NaturalPlaylist* playlistN;
		vector<double> length;
        vector<string> artist;
        vector<string> song;
	
};
#endif //_SONG_LENGTH_HPP_
	
		
