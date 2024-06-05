#include <iostream>

using namespace std;

int main() {
  int score = 11;
  int *score_pointer = nullptr;
  double high_value = 100;
  score_pointer = &high_value; // this is bad
}
    