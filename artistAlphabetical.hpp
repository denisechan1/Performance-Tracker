#ifndef _ARTIST_ALPHABETICAL_HPP
#define _ARTIST_ALPHABETICAL_HPP
#include "strategy.hpp"

#include <iostream>
#include <vector>
  
class artistAlphabetical : public Strategy{
    public:
        artistAlphabetical() {} ;
        artistAlphabetical(HipHopPlaylist* playlist){
            playlistH = playlist;
            vector<double> length = playlistH->getTimes();
    	    vector<string> artist = playlistH->getArtists();
    	    vector<string> song = playlistH->getSongs();
        }

        artistAlphabetical(EDMPlaylist* playlist){
            playlistE = playlist;
            vector<double> length = playlistE->getTimes();
    	    vector<string> artist = playlistE->getArtists();
    	    vector<string> song = playlistE->getSongs();
        }

        artistAlphabetical(PopPlaylist* playlist){
            playlistP = playlist;
            vector<double> length = playlistP->getTimes();
    	    vector<string> artist = playlistP->getArtists();
    	    vector<string> song = playlistP->getSongs();
        }

        artistAlphabetical(LoFiPlaylist* playlist){
            playlistL = playlist;
            vector<double> length = playlistL->getTimes();
    	    vector<string> artist = playlistL->getArtists();
    	    vector<string> song = playlistL->getSongs();
        }

        artistAlphabetical(RnBPlaylist* playlist){
            playlistR = playlist;
            vector<double> length = playlistR->getTimes();
    	    vector<string> artist = playlistR->getArtists();
    	    vector<string> song = playlistR->getSongs();
        }

        artistAlphabetical(NaturalPlaylist* playlist){
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

	void insertionSort() {

        for(unsigned int i = 1; i < artist.size(); i++) {
            int currIndex = i;

            while (currIndex > 0 && artist.at(currIndex - 1) > artist.at(currIndex - 1)) {
                string artistTemp = artist.at(currIndex);
                string songTemp = song.at(currIndex);
                int timeTemp = length.at(currIndex);

                artist.at(currIndex) = artist.at(currIndex - 1);
                song.at(currIndex) = song.at(currIndex - 1);
                length.at(currIndex) = length.at(currIndex - 1);

                artist.at(currIndex - 1) = artistTemp;
                song.at(currIndex - 1) = songTemp;
                length.at(currIndex - 1) = timeTemp;

                currIndex--;
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
#endif //_ARTIST_ALPHABETICAL_HPP_ 

