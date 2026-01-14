//Pracice 7.1.1-2
#include <iostream>

void twofold(int* n);
void threefold(int* n);
void CtoF(float* c);

int main() 
{
	int th_input;
	float tm_input;

	int a = 3;
	int b = 4;
	int c = 5;

	std::cout << "Before, a, b and c were " << a << ", " << b << ', ' << c << std::endl;

	twofold(&a);
	twofold(&b);
	twofold(&c);

	std::cout << "Now they're " << a << ", " << b << ", " << c << std::endl;

	std::cout << "Now put in a number you want multiplied by 3.";
	std::cin >> th_input;

	std::cout << "Before you put in " << th_input;
	threefold(&th_input);
	std::cout << " and now it's " << th_input << "!" << std::endl;

	std::cout << "Now put in a temperature in Celsius, and we'll make it better!" << std::endl;
	std::cin >> tm_input;

	std::cout << tm_input << " degrees Celsius is ";
	CtoF(&tm_input);
	std::cout << tm_input << " degrees Fahrenheit" << std::endl;

	return 0;
}

void twofold(int* in) 
{
	*in *= 2;
}

void threefold(int* in) 
{
	*in *= 3;
}

void CtoF(float* c) 
{
	*c *= 1.8;
	*c += 32.0;
}