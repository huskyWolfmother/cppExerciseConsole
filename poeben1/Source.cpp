#include <iostream>

enum Suit {clubs, diamonds, hearts, spades};
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
	card(int n, Suit s) : number(n), suit(s)
	{}
	void display();
	bool isEqual(card);
};

void card::display()
{
	if (number >= 2 && number <= 10)
		std::cout << number;
	else
		switch (number)
		{
		case jack: std::cout << "Валет "; break;
		case queen: std::cout << "Дама "; break;
		case king: std::cout << "Король "; break;
		case ace: std::cout << "Туз "; break;
		}
	switch (suit)
	{
	case clubs: std::cout << "треф"; break;
	case diamonds: std::cout << "бубен"; break;
	case hearts: std::cout << "червей"; break;
	case spades: std::cout << "пик"; break;
	}
}
bool card::isEqual(card c2)
{
	return (number == c2.number && suit == c2.suit) ? true : false;
}

int main()
{
	setlocale(0, "ru");
	card temp, chosen, prize;
	int position;
	card card1(7, clubs);
	std::cout << "\nКарта 1: ";
	card1.display();
	card card2(jack, hearts);
	std::cout << "\nКарта 2: ";
	card2.display();
	card card3(ace, spades);
	std::cout << "\nКарта 3: ";
	card3.display();
	prize = card3;
	std::cout << "Меняем карты 1 и 3...";
	temp = card3; card3 = card1; card1 = temp;
	std::cout << "Меняем карты 2 и 3...";
	temp = card3; card3 = card2; card2 = temp;
	std::cout << "Меняем карты 1 и 2...";
	temp = card2; card2 = card1; card3 = temp;
	std::cout << "На какой позиции (1, 2 или 3) теперь ";
	prize.display();
	std::cout << "?";
	std::cin >> position;
	switch (position)
	{
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	}
	if (chosen.isEqual(prize))
		std::cout << "Правильно! Вы выиграли!";
	else
		std::cout << "Неверно. Вы проиграли.";
	std::cout << "Вы выиграли карту ";
	chosen.display();
	std::cout << std::endl;
	return 0;
}