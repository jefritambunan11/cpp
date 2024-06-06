#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const vec) { 
  for (auto str: *vec) cout << str << " ";
  cout << endl;
}

void display(int *array, int preventValue) { 
  while (*array != preventValue) cout << *array++ << " "; 
  cout << endl; 
}

void mutationVector(vector<string> *vec) {  
  int index = 0; 
  for (auto str: *vec) { 
    if (str.empty()) (*vec).at(index) = "Tidak_Boleh_Kosong"; 
    index += 1;     
  } 
}

int main() {
  cout << "-----------------------------" << endl;
  vector<string> students = {"Larry", "Moe", "Curly"};
  display(&students);
   
  cout << "\n-----------------------------" << endl;
  int scores[] = {100, 98, 97, 79, 85, -1};
  display(scores, -1);

  cout << "\n-----------------------------" << endl;
  vector<string> bandMember = {"Jefri", "Paul", "Billy", "Mike", ""};
  mutationVector(&bandMember);
  display(&bandMember);
    
  cout  << endl;
  return 0;
}

/*  
-----------------------------
Larry Moe Curly 

-----------------------------
100 98 97 79 85 

-----------------------------
Jefri Paul Billy Mike Tidak_Boleh_Kosong 

*/