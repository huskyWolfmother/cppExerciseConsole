#include <iostream>

class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist()
	{
		std::cout << "������� ����: "; std::cin >> feet;
		std::cout << "������� �����: "; std::cin >> inches;
	}
	void showdist()
	{
		std::cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	const int MAX = 100;
	setlocale(0, "ru");
	Distance dist[MAX];
	int n = 0;
	char ans;
	std::cout << std::endl;
	do
	{
		std::cout << "������� ����� ����� " << n + 1 << std::endl;
		dist[n++].getdist();
		std::cout << "���������� ����(y/n)?: ";
		std::cin >> ans;
	} while (ans != 'n');
	for (int j = 0; j < n; j++)
	{
		std::cout << "\n����� ����� " << j + 1 << " : ";
		dist[j].showdist();
	}
	std::cout << std::endl;
	return 0;
}