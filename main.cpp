#include <iostream>
#include "UserGuide.hpp"
#include "Task.hpp"
#include "Category.hpp"
#include "CompositeInput.hpp"
#include "ConcreteFactory.hpp"
#include "PlaylistSubclasses.hpp"

#include <vector>
#include <string>

using namespace std;

//Abstract Factory class functions
void printMenu2();


//Strategy class functions


int main() {
	//composite pattern
	CompositeInput();
	
  //abstract factory pattern
  int control2 = 1;
  char input2;
  vector<string> chosensongs;
  vector<string> chosenartists;
  vector<double> chosentimes;

  while (control2) {
    printMenu2();
    cin >> input2;
    if (input2 == 'h'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Hip Hop playlist: " << endl;
      cin >> pname;
      HipHopPlaylist* user = choice->CreateHipHopPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control2 = 0;
    }
    else if (input2 == 'e'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the EDM playlist: " << endl;
      cin >> pname;
      EDMPlaylist* user = choice->CreateEDMPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control2 = 0; 
    }
    else if (input2 == 'p'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Pop playlist: " << endl;
      cin >> pname;
      PopPlaylist* user = choice->CreatePopPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control2 = 0; 
    }
    else if (input2 == 'l'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Lo-Fi playlist: " << endl;
      cin >> pname;
      LoFiPlaylist* user = choice->CreateLoFiPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control2 = 0; 
    }
    else if (input2 == 'r'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the RnB playlist: " << endl;
      cin >> pname;
      RnBPlaylist* user = choice->CreateRnBPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control2 = 0; 
    }
    else if (input2 == 'n'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Nature Sounds playlist: " << endl;
      cin >> pname;
      NaturalPlaylist* user = choice->CreateNaturalPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control2 = 0; 
    }
    else {
      cout << "Not a valid input. Please try again." << endl;
    }
  }

  //strategy pattern

//ruth when you start the vectors for u to sort to output will be: chosensongs, chosenartists, chosentimes

    return 0;
}

void printMenu2() {
      cout << "Choose a playlist to listen to: " << endl;
      cout << "Enter 'h' to listen to a Hip Hop playlist." << endl;
      cout << "Enter 'e' to listen to an EDM playlist." << endl;
      cout << "Enter 'p' to listen to a Pop playlist." << endl;
      cout << "Enter 'l' to listen to a Lo-Fi playlist." << endl;
      cout << "Enter 'r' to listen to an RnB playlist." << endl;
      cout << "Enter 'n' to listen to a Nature Sound playlist." << endl;
}
