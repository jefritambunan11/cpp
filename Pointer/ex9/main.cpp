#include <iostream>

using namespace std;

int *createArray(size_t size, int init_value = 0) {
  int *newArray = nullptr;
  newArray = new int[size];   
  for (size_t i = 0; i < size; ++i) *(newArray + i) = init_value;
  return newArray;
}

void display(const int *const array, size_t size) {
  for (size_t i = 0; i < size; ++i) cout << array[i] << " ";
  cout << endl;
}

int main() {
  int *myArray = nullptr;
  size_t size;
  int initValue = 0;
  
  cout << "Aplikasi membuat array otomatis \n";
  cout << "Masukan angka untuk dimasukan ke array ? \n";
  cin >> initValue;
  cout << "Berapa kali nilai " << initValue << " akan dimasukan ke array ? \n";
  cin >> size;
  
  myArray = createArray(size, initValue);
  cout << "\n--------------------------------------" << endl;

  display(myArray, size);

  // delete keyword would be erased the memory allocation
  // prevent of the memory leaks
  delete [] myArray;

  return 0;
}

/*  
Aplikasi membuat array otomatis
Masukan angka untuk dimasukan ke array ?
100
Berapa kali nilai 100 akan dimasukan ke array ?
5

--------------------------------------
100 100 100 100 100
*/