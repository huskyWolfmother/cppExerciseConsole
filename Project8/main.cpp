#include <iostream>
#include <string>

class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() { feet = 0, inches = 0; }
	Distance(int ft, float in) { feet = ft; inches = in; }
	void get_dist();
	void show_dist();
	void add_dist(Distance d1, Distance d2);
	void div_dist(Distance d2, int divisor);
};

void Distance::get_dist()
{
	std::cout << "¬ведите футы: "; std::cin >> feet;
	std::cout << "¬ведите дюймы: "; std::cin >> inches;
}

void Distance::show_dist()
{
	std::cout << feet << "\'-" << inches << '\"';
}

void Distance::add_dist(Distance d1, Distance d2)
{
	feet = d1.feet + d2.feet;
	inches = d1.inches + d2.inches;
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet += 1;
	}
}

void Distance::div_dist(Distance d1, int divisor)
{
	float fltfeet = d1.feet + d1.inches / 12.0;
	fltfeet /= divisor;
	fltfeet = int(fltfeet);
	inches = (fltfeet - feet) * 12.0;
}

int main()
{
	setlocale(0, "ru");
	
	Distance distarr[100];
	
	return 0;
}