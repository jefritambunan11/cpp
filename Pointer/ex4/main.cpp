
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {    
  int score = 100;
  int *score_ptr = &score;

  *score_ptr = 200;
  
  cout << *score_ptr << endl;		// 200
  cout << score << endl; 			// 200

  cout << "\n------------------------------" << endl;

  string name = "Frank";
  string *string_ptr = &name;

  cout << *string_ptr << endl;   	// Frank   
  name = "James"; 	    
  cout << *string_ptr << endl;   	// James  


  cout << "\n------------------------------" << endl;

  vector<string> students = {"Larry", "Moe", "Curly"};
  vector<string> *std_ptr {nullptr};
  
  std_ptr = &students;
  
  cout << "First student: " << (*std_ptr).at(0) << endl;    // Larry
  
  cout << "Students: ";
  for (auto st: *std_ptr)  cout << st << " ";
  cout << endl;
  

  cout << endl;
  return 0;
}

