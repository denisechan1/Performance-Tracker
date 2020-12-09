#include <iostream>
#include "UserGuide.hpp"
#include "Task.hpp"
#include "Category.hpp"
#include "ConcreteFactory.hpp"
#include "PlaylistSubclasses.hpp"

#include <vector>
#include <string>

using namespace std;

void printMenu();


/*Composite Pattern Functions*/
void AddToGuide();
void PrintTop();
void EnterNewGuide();
Category* AccessGuide();
void addItem(Category*);
vector<Category*> top;

//Abstract Factory class functions
void printMenu2();


//Strategy class functions


int main() {
    // composite pattern
    int control = 1;
    int input;
    while (control) {
      printMenu();
      cin >> input;
      if (input == 1) {
        EnterNewGuide();
      }
      else if (input == 2) {
        AddToGuide();
      }
      else if (input == 3) {
        PrintTop();
      }
      else if (input == 0) {
        cout << "Thank you!" << endl;
        control = 0;
      }
      else {
        cout << "ENTER VALID NUMBER\n" << endl;
      }
    }

  //abstract factory pattern
  int control2 = 1;
  char input2;
  vector<string> chosensongs;
  vector<string> chosenartists;
  vector<double> chosentimes;

  while (control) {
    printMenu2();
    cin >> input2;
    if (input == 'w'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Hip Hop playlist: " << endl;
      cin >> pname;
      HipHopPlaylist* user = choice->CreateHipHopPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control = 0;
    }
    else if (input == 'e'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the EDM playlist: " << endl;
      cin >> pname;
      EDMPlaylist* user = choice->CreateEDMPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control = 0; 
    }
    else if (input == 'p'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Pop playlist: " << endl;
      cin >> pname;
      PopPlaylist* user = choice->CreatePopPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control = 0; 
    }
    else if (input == 'l'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Lo-Fi playlist: " << endl;
      cin >> pname;
      LoFiPlaylist* user = choice->CreateLoFiPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control = 0; 
    }
    else if (input == 'r'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the RnB playlist: " << endl;
      cin >> pname;
      RnBPlaylist* user = choice->CreateRnBPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control = 0; 
    }
    else if (input == 'n'){
      ConcreteFactory* choice = new ConcreteFactory();
      string pname;
      cout << "Enter a name for the Nature Sounds playlist: " << endl;
      cin >> pname;
      NaturalPlaylist* user = choice->CreateNaturalPlaylist(pname);
      chosensongs = user->getSongs();
      chosenartists = user->getArtists();
      chosentimes = user->getTimes();
      control = 0; 
    }
    else {
      cout << "Not a valid input. Please try again." << endl;
    }
  }


  //strategy pattern

//ruth when you start the vectors for u to sort to output will be: chosensongs, chosenartists, chosentimes

    return 0;
}

void printMenu() {
      cout << "Enter 1 to create new guide." << endl;
      cout << "Enter 2 add new task/catergory to existing guide." << endl;
      cout << "Enter 3 to print out guide." << endl;
      cout << "Enter 0 to quit program." << endl;
      cout << "Enter job you want to do: ";
}


void EnterNewGuide() {
  string name;
  cout << "Enter name of new guide planner: ";
  cin >> name;
  cout << "Enter hours planned to study each day: ";
  double hpd;
  cin >> hpd;
  cout << "Enter how many days until D-Day: ";
  int dday;
  cin >> dday;
  cout << endl;
  Category* main = new Category (name, hpd, dday);
  top.push_back(main);
  addItem(main);
}

Category* AccessGuide() {
  cout << "List of Guides: " << endl;
  for (int i = 0; i < top.size(); ++i) {
    cout << i+1 << ". " << top.at(i)->getName() << endl;
  }
  cout << endl;
  int test = 1;
  int num;
  while (test) {
      cout << "Enter the corresponding number of guide you want to access: " << endl;
      cin >> num;
      if (!(num < 1) || !(num >= top.size())) {
        test = 0;
      }
      else {
        cout << "Error!" << endl;
      }
  }
  return top.at(num-1);
}

void addItem(Category* temp) {
  int ctrl = 1;
  int input;
  while (ctrl) {
    cout << "Enter 1 for new Category in " << temp->getName() << ".\n";
    cout << "Enter 2 for new Task in " << temp->getName() << ".\nEnter 3 to quit \n";
    cin >> input;
    if (input == 1) {
      string name1;
      cout << "Enter name of Category: ";
      cin >> name1;
      Category* subcat = new Category(name1, 0, 0);
      temp->add(subcat);
      top.push_back(subcat);
      cout << endl;
    }
    else if (input == 2) {
      string name2;
      cout << "Enter name of Task: ";
      cin >> name2;
      Task* task = new Task(name2);
      temp->add(task);
      cout << endl;
    }
    else if (input == 3) {
      cout << endl;
      ctrl = 0;
    }
    else {
      cout << "Enter valid number!" << endl;
    }

  }
}

void AddToGuide() {
        if (top.size() == 0) {
          cout << "No guides to access.\n" << endl;
        }
        else {
          Category* temp = AccessGuide();
          addItem(temp);
        }
}

void PrintTop() {
        if (top.size() == 0) {
          cout << "No guides to access.\n" << endl;
        }
        else {
          for (int i = 0; i < top.size(); ++i) {
            top.at(i)->calculateTimeEachDay();
          }
          Category* print = AccessGuide();
          cout << "Guide (Total days: " << print->getMax() << "): " << endl;
          print->printGuide();
          cout << endl;
        }
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
