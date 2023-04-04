#include "card.h"
#include <iostream>

void card::display()
{
	if (number >= 2 && number <= 10)
		std::cout << number;
	else
	{
		switch (number)
		{
		case jack: std::cout << 'J';break;
		case queen: std::cout << 'Q';break;
		case king: std::cout << 'K';break;
		case ace: std::cout << 'A';break;
		}
	}
	switch (suit)
	{
	case clubs: std::cout << static_cast<char>(5);break;
	case diamonds: std::cout << static_cast<char>(4);break;
	case hearts: std::cout << static_cast<char>(3);break;
	case spades: std::cout << static_cast<char>(6);break;
	}
}