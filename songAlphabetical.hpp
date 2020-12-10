#ifndef _SONG_ALPHABETICAL_HPP_
#define _SONG_ALPHABETICAL_HPP_
#include "strategy.hpp"

#include <iostream>
#include <vector>
  
class songAlphabetical : public Strategy{
    public:
        songAlphabetical() {} ;
        songAlphabetical(HipHopPlaylist* playlist){
            playlistH = playlist;
            vector<double> length = playlistH->getTimes();
    	    vector<string> artist = playlistH->getArtists();
    	    vector<string> song = playlistH->getSongs();
        }

        songAlphabetical(EDMPlaylist* playlist){
            playlistE = playlist;
            vector<double> length = playlistE->getTimes();
    	    vector<string> artist = playlistE->getArtists();
    	    vector<string> song = playlistE->getSongs();
        }

        songAlphabetical(PopPlaylist* playlist){
            playlistP = playlist;
            vector<double> length = playlistP->getTimes();
    	    vector<string> artist = playlistP->getArtists();
    	    vector<string> song = playlistP->getSongs();
        }

        songAlphabetical(LoFiPlaylist* playlist){
            playlistL = playlist;
            vector<double> length = playlistL->getTimes();
    	    vector<string> artist = playlistL->getArtists();
    	    vector<string> song = playlistL->getSongs();
        }

        songAlphabetical(RnBPlaylist* playlist){
            playlistR = playlist;
            vector<double> length = playlistR->getTimes();
    	    vector<string> artist = playlistR->getArtists();
    	    vector<string> song = playlistR->getSongs();
        }

        songAlphabetical(NaturalPlaylist* playlist){
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

    void bubbleSort() {
        int n = song.size();

        while (n > 0) {
            int lastIndex = 0;

            for (int currIndex = 1; currIndex < n; currIndex++){
                if (song.at(currIndex - 1) > song.at(currIndex)) {
                    string songTemp = song.at(currIndex - 1);
                    string artistTemp = artist.at(currIndex - 1);
                    int timeTemp = length.at(currIndex - 1);

                    song.at(currIndex - 1) = song.at(currIndex);
                    artist.at(currIndex - 1) = artist.at(currIndex);
                    length.at(currIndex - 1) = length.at(currIndex);

                    song.at(currIndex) = songTemp;
                    artist.at(currIndex) = artistTemp;
                    length.at(currIndex) = timeTemp;

                    lastIndex = currIndex;
                }
            }
            n = lastIndex;
        }

        // for(unsigned int i = 0; i < song.size(); i++){
        //     cout << song.at(i) << "    " << artist.at(i) << "    " << length.at(i) << endl;
        // }
    }

    vector<string> getS(){
        return this->song;
    }

    vector<string>getA(){
        return this->artist;
    }

    vector<double>getL(){
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

