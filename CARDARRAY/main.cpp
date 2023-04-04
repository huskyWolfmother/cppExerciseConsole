#include <iostream>
#include <cstdlib>
#include <ctime>
#include "card.h"

int main()
{
	setlocale(LC_ALL, "ru");
	card deck[52];
	int j;
	std::cout << std::endl;
	for (j = 0;j < 52;j++)
	{
		int num = (j % 13) + 2;
		Suit su = Suit(j / 13);
		deck[j].set(num, su);
	}
	std::cout << "Исходная колонна:\n";
	for (j = 0; j < 52;j++)
	{
		deck[j].display();
		std::cout << "  ";
		if (!((j + 1) % 13))
			std::cout << std::endl;
	}
	srand(time(NULL));
	for (j = 0;j < 52;j++)
	{
		int k = rand() % 52;
		card temp = deck[j];
		deck[j] = deck[k];
		deck[k] = temp;
	}
	std::cout << "\nПеремешанная колода:\n";
	for (j = 0; j < 52; j++)
	{
		deck[j].display();
		std::cout << "  ";
		if (!((j + 1) % 13))
			std::cout << std::endl;
	}
	return 0;
}