#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int num = 100;
  int &shortCut = num;

  cout << num << endl;
  cout << shortCut << endl;

  cout << "---------------------------\n" << endl;
  num = 200;
  cout << num << endl;
  cout << shortCut << endl;
  
  cout << "---------------------------\n" << endl;
  num = 300;
  cout << num << endl;
  cout << shortCut << endl;

  cout << "---------------------------\n" << endl;
  vector<string> students = {"Larry", "Moe", "Currly"};
  
  for (auto std: students) std = "Funny"; // failed to change
  for (auto std: students) cout << std << endl;

  cout << "---------------------------\n" << endl;
  for (auto &std: students) std = "Funny"; // succeed to change
  for (auto const &std: students) cout << std << endl;
  
  return 0;
}

/*  
100
100
---------------------------

200
200
---------------------------

300
300
---------------------------

Larry
Moe
Currly
---------------------------

Funny
Funny
Funny
*/