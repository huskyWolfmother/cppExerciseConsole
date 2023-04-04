#include <iostream>
#include <iomanip>

const int DISTRICTS = 4;
const int MONTHS = 3;

int main()
{
	setlocale(0, "ru");
	int d, m;
	double sales[DISTRICTS][MONTHS];
	std::cout << std::endl;
	for( d = 0; d< DISTRICTS; d++)
		for (m = 0;m < MONTHS; m++)
		{
			std::cout << "Âגוהטעו מבת¸ל ןנמהאז הכÿ מעהוכא " << d + 1 << ", חא לוסÿצ " << m + 1 << ": ";
			std::cin >> sales[d][m];
		}
	std::cout << "\n\n";
	std::cout << "                     Ìוסÿצ\n";
	std::cout << "            1          2         3";
	for (d = 0; d < DISTRICTS; d++)
	{
		std::cout << "\nÎעהוכ " << d + 1;
		for (m = 0;m < MONTHS;m++)
			std::cout 
			<< std::setiosflags(std::ios::fixed) 
			<< std::setiosflags(std::ios::showpoint) 
			<< std::setprecision(2) 
			<< std::setw(10) 
			<< sales[d][m];
	}
	std::cout << std::endl;
	return 0;
}