#include <iostream>

class Distance
{
private:
	int feet;
	float inches;
public:
	void getdist()
	{
		std::cout << "Введите футы: "; std::cin >> feet;
		std::cout << "Введите дюймы: "; std::cin >> inches;
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
		std::cout << "Введите длину номер " << n + 1 << std::endl;
		dist[n++].getdist();
		std::cout << "Продолжить ввод(y/n)?: ";
		std::cin >> ans;
	} while (ans != 'n');
	for (int j = 0; j < n; j++)
	{
		std::cout << "\nДлина номер " << j + 1 << " : ";
		dist[j].showdist();
	}
	std::cout << std::endl;
	return 0;
}