#include <iostream>
#include <string>

class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  // Overloaded Constructors
  Player();
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);
  std::string getterName() {
    return name;
  }
  int getterHealth() {
    return health;
  }
  int getterXp() {
    return xp;
  }
};

Player::Player() : name("None"), health(0), xp(0) {}
Player::Player(std::string name_val) : name(name_val), health(0), xp(0) {}  
Player::Player(std::string name_val, int health_val, int xp_val) : name(name_val), health(health_val), xp(xp_val) {}

int main() {    
  Player empty = {};
  Player frank = {"Frank"};
  Player villain = {"Villain", 100, 55};

  std::cout << empty.getterName() << std::endl;
  std::cout << frank.getterName() << std::endl;
  std::cout << frank.getterHealth() << std::endl;
  std::cout << frank.getterXp() << std::endl;
  std::cout << villain.getterName() << std::endl;  
  std::cout << villain.getterHealth() << std::endl;
  std::cout << villain.getterXp() << std::endl;

  return 0;
}

/*  
None
Frank
0
0
Villain
100
55
*/