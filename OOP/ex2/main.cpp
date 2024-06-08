#include <iostream>
#include <string>

using namespace std;

class Player {
private:  
  string name = "Player";
  int health;
  int xp;
public:  
  void talk(string text_to_say) { 
    cout << name << " says " << text_to_say << endl;  
  }
  bool is_dead() {
		if (health == 0) return true;
		else return false;
	}
};

int main() {
  Player frank;
  frank.name = "Frank"; // can't access the private area
  cout << frank.health << endl;  // can't access the private area
  // frank.talk("Hello there");
  return 0;
}

