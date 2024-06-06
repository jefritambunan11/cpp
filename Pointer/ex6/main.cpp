#include <iostream>

using namespace std;

int main() {    
  int scores[] = {100, 95, 89, 68, -1};
  int *score_ptr = scores;
  
  while (*score_ptr != -1) {
    cout << *score_ptr << endl;
    score_ptr++;
  }
  
  cout << "\n-------------------------" << endl;
  score_ptr = scores;
  while (*score_ptr != -1) 
    cout << *score_ptr++ << endl;
      
  cout << "\n-------------------------" << endl;
  string s1 = "Frank";
  string s2 = "Frank";
  string s3 = "James";

  string *p1 = &s1;		
  string *p2 = &s2;
  string *p3 = &s1;		

  cout << boolalpha;
  cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl;		// false  => checking the address 
  cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl;		// true   => checking the address 

  cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl;		// true => checking the value 
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// true => checking the value 
  
  p3 = &s3;   // mutated the reference
  cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl;		// false
  

  cout << "\n-------------------------" << endl;
  char name[] = {"Frank"};
  
  char *char_ptr1 = nullptr;
  char *char_ptr2 = nullptr;
  
  char_ptr1 = &name[0];   // F
  char_ptr2 = &name[3];   // n

  cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 

  // char_ptr2 - char_ptr1 == 3 - 0 = 3


  char_ptr1 = &name[2];   // a
  char_ptr2 = &name[4];   // k

  cout << "In the string " << name << ",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " <<  *char_ptr1  << endl; 

  // char_ptr2 - char_ptr1 == 2 - 4 = 2

  
  cout << endl;
  return 0;
}

