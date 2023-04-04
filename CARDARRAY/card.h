#pragma once

enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
	int number;
	Suit suit;
public:
	card()
	{}
	void set(int n, Suit s)
	{ suit = s, number = n; }
	void display();
};

