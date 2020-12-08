#include <iostream>
#include "UserGuide.hpp"
#include "Task.hpp"
#include "Category.hpp"

using namespace std;

//Composite class functions
void printMenu();
void EnterNewGuide();
Category* AccessGuide();
void addItem(Category*);
vector<Category*> top;



int main(){
    int control = 1;
    int input;
    while (control) {
      printMenu();
      cin >> input;
      if (input == 1) {
        EnterNewGuide();
      }
      else if (input == 2) {
        if (top.size() == 0) {
          cout << "No guides to access.\n" << endl;
        }
        else {
          Category* temp = AccessGuide();
          addItem(temp);
        }
      }
      else if (input == 3) {
        if (top.size() == 0) {
          cout << "No guides to access.\n" << endl;
        }
        else {
          cout << "Guide: " << endl;
          AccessGuide()->printGuide();
          cout << endl;
        }
      }
      else if (input == 0) {
        cout << "Thank you!" << endl;
        control = 0;
      }
      else {
        cout << "ENTER VALID NUMBER\n" << endl;
      }
    }


    return 0;
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
  addItem(main);
  top.push_back(main);
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
      double hpd1;
      int dday1;
      cout << "Enter name of Category: ";
      cin >> name1;
      cout << "Enter hours planned to study each day: ";
      cin >> hpd1;
      cout << "Enter how many days until D-Day: ";
      cin >> dday1;
      Category* subcat = new Category(name1, hpd1, dday1);
      temp->add(subcat);
      top.push_back(subcat);
      cout << endl;
    }
    else if (input == 2) {
      string name2;
      double hpd2;
      int dday2;
      cout << "Enter name of Task: ";
      cin >> name2;
      cout << "Enter hours planned to study each day: ";
      cin >> hpd2;
      cout << "Enter how many days until D-Day: ";
      cin >> dday2;
      Task* task = new Task(name2, hpd2, dday2);
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

void printMenu() {
      cout << "Enter 1 to create new guide." << endl;
      cout << "Enter 2 add new task/catergory to existing guide." << endl;
      cout << "Enter 3 to print out guide." << endl;
      cout << "Enter 0 to quit program." << endl;
      cout << "Enter job you want to do: ";
}



