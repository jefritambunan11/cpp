#include <iostream>

using namespace std;

int main() {
  double high_value = 100;
  double low_value = 1;
  double *temp_value = nullptr; // to get safe 
  
  temp_value = &high_value;
  cout << *temp_value << endl; // 100

  temp_value = &low_value; 
  cout << *temp_value << endl; // 1
}
    