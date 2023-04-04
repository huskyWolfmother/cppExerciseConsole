#include <iostream>
#include <cstring>

class String
{
private:
	enum { SZ = 80 };
	char str[SZ];
public:
	String()
	{str[0] = '\0';}
	String (const char s[])
	{strcpy_s(str,s); }
	void display()
	{ std::cout << str; }
	void concat(String s2)
	{
		if (strlen(str) + strlen(s2.str) < SZ)
			strcat_s(str, s2.str);
		else
			std::cout << "\nПереполнение!";
	}
};

int main()
{
	setlocale(0, "ru");
	String s1("С Новым Годом! ");
	String s2 = "С новым счастьем!";
	String s3;
	std::cout << "\ns1=";s1.display();
	std::cout << "\ns2=";s2.display();
	std::cout << "\ns3=";s3.display();
	s3 = s1;
	std::cout << "\ns3=";s3.display();
	s3.concat(s2);
	std::cout << "\ns3=";s3.display();
	std::cout << std::endl;
	return 0;
}