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
		std::cout << "������� ������: ";
		std::cin >> apart[n].modelnumber;
		std::cout << "������� ����� ��������: ";
		std::cin >> apart[n].partnumber;
		std::cout << "������� ���������: ";
		std::cin >> apart[n].cost;
	}
	std::cout << std::endl;
	for (n = 0;n < SIZE;n++)
	{
		std::cout << "������: " << apart[n].modelnumber;
		std::cout << "��������: " << apart[n].partnumber;
		std::cout << "���������: " << apart[n].cost << std::endl;
	}
	return 0;
}