#ifndef _ABSTRACTFACTORY_HPP_
#define _ABSTRACTFACTORY_HPP_

#include <iostream> 
#include <string>

using namespace std; 

class AbstractFactory {
public:
    // AbstractFactory(string type, string name){
    //   if (type == "h"){
    //     return CreateHipHopPlaylist(name);
    //   }

    //   if (type == "e"){
    //     CreateEDMPlaylist(name);
    //   }

    //   if (type == "p"){
    //     CreatePopPlaylist(name);
    //   }

    //   if (type == "l"){
    //     CreateLoFiPlaylist(name);
    //   }

    //   if (type == "r"){
    //     CreateRnBPlaylist(name);
    //   }

    //   if (type == "n"){
    //     CreateNaturalPlaylist(name);
    //   }
    // }
    AbstractFactory() {};
    virtual Playlist* CreateHipHopPlaylist(string name) const = 0;
    virtual Playlist* CreateEDMPlaylist(string name) const = 0;
    virtual Playlist* CreatePopPlaylist(string name) const = 0;
    virtual Playlist* CreateLoFiPlaylist(string name) const = 0;
    virtual Playlist* CreateRnBPlaylist(string name) const = 0;
    virtual Playlist* CreateNaturalPlaylist(string name) const = 0;
};

#endif //_ABSTRACTFACTORY_HPP_