#include <iostream>

const int SIZE = 4;

struct part
{
	int modelnumber;
	int partnumber;
	float cost;
};

int main()
{
	setlocale(0, "ru");
	int n;
	part apart[SIZE];
	for (n = 0;n < SIZE;n++)
	{
		std::cout << std::endl;
		std::cout << "Введите модели: ";
		std::cin >> apart[n].modelnumber;
		std::cout << "Введите номер запчасти: ";
		std::cin >> apart[n].partnumber;
		std::cout << "Введите стоимость: ";
		std::cin >> apart[n].cost;
	}
	std::cout << std::endl;
	for (n = 0;n < SIZE;n++)
	{
		std::cout << "Модель: " << apart[n].modelnumber;
		std::cout << "Запчасть: " << apart[n].partnumber;
		std::cout << "Стоимость: " << apart[n].cost << std::endl;
	}
	return 0;
}