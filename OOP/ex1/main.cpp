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

	void deposit(double bal) {
		balance += bal; 
		cout << "In deposit " << bal << endl; 
	}

	void withdraw(double bal) {
		balance -= bal; 
		cout << "In withdraw " << bal << endl;  
	}
};

int main() {	
	Account frankAccount;
	frankAccount.name = "Frank's account";
	frankAccount.balance = 5000.0;
	frankAccount.deposit(1000.0);
	frankAccount.withdraw(500.0);
	cout << "Frank's account : " <<  frankAccount.balance << endl;
		
	Player frank;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	frank.talk("Hi there");
	cout << "Frank's health : " <<  frank.health << endl;

	Player jimi;
	jimi.name = "Frank";
	jimi.health = 80;
	jimi.xp = 12;
	jimi.talk("Hi there");		
	cout << "Frank's health : " <<  jimi.health << endl;
	
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

/*
In deposit 1000
In withdraw 500
Frank's account : 5500
Frank says Hi there
Frank's health : 100
Frank says Hi there
Frank's health : 80
Frank says Hi there
Frank says Hi there
*/