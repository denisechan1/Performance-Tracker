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
            length = playlistH->getTimes();
    	    artist = playlistH->getArtists();
    	    song = playlistH->getSongs();
        }

        songAlphabetical(EDMPlaylist* playlist){
            playlistE = playlist;
            length = playlistE->getTimes();
    	    artist = playlistE->getArtists();
    	    song = playlistE->getSongs();
        }

        songAlphabetical(PopPlaylist* playlist){
            playlistP = playlist;
            length = playlistP->getTimes();
    	    vector<string> artist = playlistP->getArtists();
    	    vector<string> song = playlistP->getSongs();
        }

        songAlphabetical(LoFiPlaylist* playlist){
            playlistL = playlist;
            length = playlistL->getTimes();
    	    artist = playlistL->getArtists();
    	    song = playlistL->getSongs();
        }

        songAlphabetical(RnBPlaylist* playlist){
            playlistR = playlist;
            length = playlistR->getTimes();
    	    artist = playlistR->getArtists();
    	    song = playlistR->getSongs();
        }

        songAlphabetical(NaturalPlaylist* playlist){
            playlistN = playlist;
            length = playlistN->getTimes();
    	    artist = playlistN->getArtists();
    	    song = playlistN->getSongs();
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
                    double timeTemp = length.at(currIndex - 1);

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
        return song;
    }

    vector<string>getA(){
        return artist;
    }

    vector<double>getL(){
        return length;
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

