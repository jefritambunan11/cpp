#include <iostream>

using namespace std;

int main() {    
  int *int_ptr = nullptr;
  int_ptr = new int;                // mengalokasi int_ptr ke heap (dinamis)
  cout << int_ptr << endl;          // nampilkan address
  delete int_ptr;                   // hapus
  
  size_t size = 0;
  double *temp_ptr = nullptr;
  
  cout << "Masukan nilai ukuran ? ";
  cin >> size;                      // penetuan ukuran array 
  
  temp_ptr = new double[size];      // mengalokasi penyimpanan di heap(dinamis)
  cout << temp_ptr << endl;         // nampilkan address
  delete [] temp_ptr;               // hapus
  
  cout << endl;
  return 0;
}

