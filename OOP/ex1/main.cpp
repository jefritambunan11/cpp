#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {    
public:
	string name = "Player";
	int health = 100;
	int xp = 3;

	void talk(string text_to_say) { 
		cout << name << " says " << text_to_say << endl;  
	}

	bool is_dead() {
		if (health == 0) return true;
		else return false;
	}
};

class Account {  
public:  
	string name = "";
	double balance = 0.0;    

	bool deposit(double bal) {
		balance += bal; 
		cout << "In deposit" << endl; 
	}

	bool withdraw(double bal) {
		balance -= bal; 
		cout << "In withdraw" << endl;  
	}
};

int main() {	
	Account frankAccount;
	frankAccount.name = "Frank's account";
	frankAccount.balance = 5000.0;
	frankAccount.deposit(1000.0);
	frankAccount.withdraw(500.0);
		
	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	frank.talk("Hi there");

	Player jimi;
	jimi.name = "Frank";
	jimi.health = 100;
	jimi.xp = 12;
	jimi.talk("Hi there");		
	
	Player multiPlayer[] = {
		frank, 
		jimi
	};
	
	vector<Player> playerAsVector = {};
	playerAsVector.push_back(frank);
	playerAsVector.push_back(jimi);
		
	Player *playerAsPtr = nullptr;
	playerAsPtr = new Player;
	(*playerAsPtr).name = "Frank";
	playerAsPtr->health = 100;
	(*playerAsPtr).xp = 12;
	(*playerAsPtr).talk("Hi there");	
	playerAsPtr->talk("Hi there");	
	
	delete playerAsPtr;

	return 0;
}