
#include <iostream>
#include <string>

class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  void set_name(std::string name_val) { 
    name = name_val;  
  }
  std::string get_name() { 
    return name;
  }
  // Overloaded Constructors
  Player() { 
    std::cout << "No args constructor called"<< std::endl;
  }
  Player(std::string name) { 
    std::cout << "String arg constructor called"<< std::endl;
  }
  Player(std::string name, int health, int xp) {
    std::cout << "Three args constructor called"<< std::endl; 
  }
  ~Player() { 
    std::cout << "Destructor called for " << name << std::endl; 
  }
};

int main() {
  {
    Player p1;
    p1.set_name("Player 1");
    std::cout << "Name: " + p1.get_name() << std::endl;
    Player p2("");
    p2.set_name("Player 2");
    std::cout << "Name: " + p2.get_name() << std::endl;
    Player p3("");
    p3.set_name("Player 3");
    std::cout << "Name: " + p3.get_name() << std::endl;
  }
  {
    Player p4;
    p4.set_name("Player 4");
    std::cout << "Name: " + p4.get_name() << std::endl;
    Player p5("");
    p5.set_name("Player 5");    
    std::cout << "Name: " + p5.get_name() << std::endl;
    Player p6("P6", 100, 12);
    p6.set_name("Player 6");
    std::cout << "Name: " + p6.get_name() << std::endl;
  }
    
  Player *enemy = new Player;
  enemy->set_name("Enemy");
  std::cout << "Name: " + enemy->get_name() << std::endl;

  Player *level_boss = new Player("Level Boss", 1000, 300);
  level_boss->set_name("Level Boss");
  std::cout << "Name: " + level_boss->get_name() << std::endl;

  delete enemy;
  delete level_boss;

  return 0;
}

/*  
No args constructor called
Name: Player 1
String arg constructor called
Name: Player 2
String arg constructor called
Name: Player 3
Destructor called for Player 3
Destructor called for Player 2
Destructor called for Player 1
No args constructor called
Name: Player 4
String arg constructor called
Name: Player 5
Three args constructor called
Name: Player 6
Destructor called for Player 6
Destructor called for Player 5
Destructor called for Player 4
No args constructor called
Name: Enemy
Three args constructor called
Name: Level Boss
Destructor called for Enemy
Destructor called for Level Boss
*/