#ifndef _ARTIST_ALPHABETICAL_HPP
#define _ARTIST_ALPHABETICAL_HPP
#include "strategy.hpp"

#include <iostream>
#include <vector>
  
class artistAlphabetical : public Strategy{
    public:

        artistAlphabetical(HipHopPlaylist* playlist){
            playlist = playlist;
        }

        artistAlphabetical(EDMPlaylist* playlist){
            playlist = playlist;
        }

        artistAlphabetical(PopPlaylist* playlist){
            playlist = playlist;
        }

        artistAlphabetical(LoFiPlaylist* playlist){
            playlist = playlist;
        }

        artistAlphabetical(RnBPlaylist* playlist){
            playlist = playlist;
        }

        artistAlphabetical(NaturalPlaylist* playlist){
            playlist = playlist;
        }

	void insertionSort() {

   	     vector<double> length = playlist.getTimes();
    	     vector<string> artist = playlist.getArtists();
    	     vector<double> song = playlist.getSongs();

    	     for(unsigned int i = 1; i < artist.size(); i++) {
        	int currIndex = i;

	     	while (currIndex > 0 && artist[currIndex - 1] > artist[currIndex]) {
            	    string artistTemp = artist[currIndex];
            	    string songTemp = song[currIndex];
            	    int timeTemp = time[currIndex];

	            artist[currIndex] = artist[currIndex - 1];
        	    song[currIndex] = song[currIndex - 1];
           	    time[currIndex] = time[currIndex - 1];

 	           artist[currIndex - 1] = artistTemp;
   	           song[currIndex - 1] = songTemp;
     	           time[currIndex - 1] = timeTemp;

            	   currIndex--;
        }
    }
}

    private:
        HipHopPlaylist* playlistH;
        EDMPlaylsit* playlsitE;
        PopPlaylist* playlistP;
        LoFiPlaylsit* playlistL;
        RnBPlaylist* playlistR;
        NaturalPlaylist* playlistN;
};
#endif //_ARTIST_ALPHABETICAL_HPP_ 

