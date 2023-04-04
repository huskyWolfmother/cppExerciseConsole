#include <iostream>
 
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance() : feet(0), inches(0.0)
	{}
	Distance(int ft, float in) : feet(ft), inches(in)
	{}
	void getdist()
	{
		std::cout << "\n¬ведите число футов: "; std::cin >> feet;
		std::cout << "\n¬ведите число дюймов: "; std::cin >> inches;
	}
	void showdist()const
	{ std::cout << feet << "\'-" << inches << '\"'; }
	Distance add_dist(const Distance& d2)const;
};

Distance Distance::add_dist(const Distance& d2)const
{
	Distance temp;
	temp.inches = inches + d2.inches;
	if (temp.inches >= 12.0)
	{
		temp.inches -= 12.0;
		temp.feet = 1;
	}
	temp.feet += feet + d2.feet;
	return temp;
}

int main()
{
	setlocale(0, "rus");
	Distance dist1, dist3;
	Distance dist2(11, 6.25);
	dist1.getdist();
	dist3 = dist1.add_dist(dist2);
	std::cout << "\ndist1="; dist1.showdist();
	std::cout << "\ndist2="; dist2.showdist();
	std::cout << "\ndist3="; dist3.showdist();
	const Distance football(300, 0);
	football.showdist();
	return 0;
}