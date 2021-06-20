#ifndef Player_h
#define player_h
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class  Player{
private:
	string name;
	int money;
	int bookmaker;//numofbaker
	string character;//role
	int deck[5];
	string cardName;//point
public:
	Player() {
		money = 1000;
		character = "Player";
		cardName = "無妞";
	}
	Player(string newName, string newCharacter, int newmoney) {
		name = newName;
		money = newmoney;
		character= newCharacter;
	}
	string getName() {
		return name;
	}
	void setName(string newName) {
		name = newName;
	}
	int getMoney() {
		return money;
	}
	void setMoney(int newMoney) {
		money = newMoney;
	}
	string getCharacter() {
		return character;
	}
	void setCharacter(string nc) {
		character= nc;
	}
	int getDeck(int sort) {
		return deck[sort];
	}
	void setDeck(int card, int count) {
		deck[count] = card;
	}
	string getCardName() {
		return cardName;
	}
	void setPoint(int p) {
		switch (p) {
		case -1:
			cardName = "無妞";
			break;
		case 0:
			cardName= "妞妞";
			break;
		case 1:
			cardName= "妞一";
			break;
		case 2:
			cardName= "妞二";
			break;
		case 3:
			cardName= "妞三";
			break;
		case 4:
			cardName= "妞四";
			break;
		case 5:
			cardName = "妞五";
			break;
		case 6:
			cardName = "妞六";
			break;
		case 7:
			cardName= "妞七";
			break;
		case 8:
			cardName = "妞八";
			break;
		case 9:
			cardName = "妞九";
			break;
		}

	}
	void print() {
		for (int i = 0; i < 5; i++) {
			cout << setw(2) << deck[i] << " ";
		}
	}
};
#endif
