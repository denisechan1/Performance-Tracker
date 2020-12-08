#ifndef _PLAYLISTSUBCLASSES_HPP_
#define _PLAYLISTSUBCLASSES_HPP_

#include "AbstractProduct.hpp"

#include <iostream>
#include <vector>

using namespace std;

class HipHopPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{"On Me", "Tyler Herro", "Drankin N Smokin", "Whoopty", "Errbody", "Moonwalking in Calabasas", "Hello", "Runnin", "Onna Come Up", "Practice", "The Parables", "That's It", "Losses", "Handgun", "Grey Area", "Body"};
        vector<string> artists{"Lil Baby", "Jack Harlow", "Future, Lil Uzi Vert", "CJ", "Lil Baby", "DDG, Blueface", "Pop Smoke, A Boogie Wit da Hoodie", "21 Savage, Metro Boomin", "Lil Eazzyy", "DaBaby", "Cordae", "Future, Lil Uzi Vert", "Lil Tjay", "DaBaby, NoCap, Polo G", "2 Chainz", "Megan Thee Stallion"};
        vector<double> times{2.16, 2.36, 3.34, 2.03, 3.31, 2.50, 3.11, 3.16, 2.08, 2.03, 3.14, 3.49, 3.16, 2.34, 2.52, 2.51};

    public:
        HipHopPlaylist() {};
        HipHopPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class EDMPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{"Just For A Moment", "Moments", "Lose Somebody", "Bye Bye", "Otherside", "Take Me", "Over Getting Over You", "Superstar", "In Flames", "All I Got", "Hesitate", "Better With You", "Always", "Alone", "Let You Down"};
        vector<string> artists{"Gryffin, Iselin", "MitiS, Adara", "Kygo, OneRepublic", "Gryffin, Ivy Adara", "Elephante, Nevve", "William Black, Matte, RUNN", "Said the Sky, Matthew Koma", "Said the Sky, Dabin, Linn", "Dablin, Lexi Norton", "Said the Sky, Kwesi", "The Spacies, ToWonder", "3LAU, Justin Caruso, Iselin", "The Him", "ARMNHMR, Nolan van Lith, Dylan Mattew", "Stonebank, Danyka Nadeau"};
        vector<double> times{4.13, 4.38, 3.20, 3.30, 3.58, 3.12, 3.41, 3.26, 3.25, 5.16, 3.09, 3.13, 3.13, 3.57, 4.13};

    public:
        EDMPlaylist() {};
        EDMPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class PopPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{"Positions", "Levitating", "Therefore I Am", "Monster", "Prisoner", "Blinding Lights", "Mood", "34+35", "Lonely", "You Broke Me First", "Paradise", "Take You Dancing", "Angels Like You", "Holy", "The Business"};
        vector<string> artists{"Ariana Grande", "Dua Lipa, DaBaby", "Billie Eilish", "Shawn Mendes, Justin Bieber", "Miley Cyrus, Dua Lipa", "The Weeknd, ROSALIA", "24kGoldn, Iann Dior", "Ariana Grande", "Justin Bieber, Benny Blanco", "Tate McRae", "MEDUZA, Dermot Kennedy", "Jason Derulo", "Miley Cyrus", "Justin Bieber, Chance the Rapper", "Tiesto"};
        vector<double> times{2.52, 3.23, 2.54, 2.59, 2.49, 3.36, 2.21, 2.54, 2.29, 2.49, 2.48, 3.10, 3.16, 3.32, 2.44};

    public:
        PopPlaylist() {};
        PopPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class LoFiPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};



    public:
        LoFiPlaylist() {};
        LoFiPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class RnBPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};



    public:
        RnBPlaylist() {};
        RnBPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

class NaturalPlaylist : public Playlist {
    private: 
        string title;
        vector<string> songs{};
        vector<string> artists{};
        vector<double> times{};



    public:
        NaturalPlaylist() {};
        NaturalPlaylist(string name){
            this->title = name;
        }

        string getTitle(){
            return title;
        }

        vector<string> getSongs(){
            return songs;
        }

        vector<string> getArtists(){
            return artists;
        }

        vector<double> getTimes(){
            return times;
        }

};

#endif