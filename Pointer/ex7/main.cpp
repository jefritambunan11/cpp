
#include <iostream>

using namespace std;


void double_data(int *int_ptr) {
  *int_ptr *= 2;	
}

void mutationString(string namePerson, string *strPointer) {
  *strPointer = namePerson + " is writing C++ code right now ";	
}

int main() {
  int value = 10;
  int *int_ptr = &value;
  
  cout << "Value: " << value << endl;

  // if it's not a pointer, sign it with reference symbol
  double_data(&value); 

  cout << "Value 1 : " << value << endl;

  cout << "-----------------------------" << endl;
  double_data(int_ptr);
  cout << "Value 2 : " << value << endl;


  cout << "-----------------------------" << endl;
  cout << "Example No 2 " << endl;

  string name = "Jefri";  
  string *namePointer = &name;
  mutationString(name, namePointer);  
  cout  << *namePointer << endl;

  return 0;
}


/*
Value: 10
Value 1 : 20
-----------------------------
Value 2 : 40
-----------------------------
Example No 2 
Jefri is writing C++ code right now 


*/