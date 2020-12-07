#ifndef _CONCRETEFACTORY_HPP_
#define _CONCRETEFACTORY_HPP_

#include "AbstractFactory.hpp"
#include "AbstractProduct.hpp" 
#include <iostream> 

using namespace std; 

class ConcreteFactory : public AbstractFactory {
    public:
        Playlist* CreateHipHopPlaylist(string name){
            Playlist* creation = new Playlist(name); 
            return creation; 
        }

        Playlist* CreateEDMPlaylist(string name){
            Playlist* creation = new Playlist(name); 
            return creation; 
        }

        Playlist* CreatePopPlaylist(string name){
            Playlist* creation = new Playlist(name); 
            return creation; 
        }

        Playlist* CreateLoFiPlaylist(string name){
            Playlist* creation = new Playlist(name); 
            return creation; 
        }

        Playlist* CreateRnBPlaylist(string name){
            Playlist* creation = new Playlist(name); 
            return creation; 
        }

        Playlist* CreateNaturalPlaylist(string name){
            Playlist* creation = new Playlist(name); 
            return creation; 
        }

};

#endif //_CONCRETEFACTORY_HPP_