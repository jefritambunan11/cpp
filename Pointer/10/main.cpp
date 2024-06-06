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
*/