#include <iostream>
#include <cmath>

double getUserInput(char coefficient)
{
	double userInput;
	while (true)
	{
		std::cout << "Enter the '" << coefficient << "' coefficient: ";
		std::cin >> userInput;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (!std::cin.fail())
			break;
		std::cout << "Invalid input, try again....\n";
	}

	return userInput;
}

double getDiscriminant(double a, double b, double c)
{
	return pow(b, 2) - (4 * a * c);
}

void calcAndPrintImaginary(double a, double b, double discriminant)
{
	double realPart{ (-b) / (2 * a) };
	double imaginaryPart{ sqrt(-discriminant) / (2 * a) };
	std::cout << "Solution 1: " << realPart << " + "
		<< imaginaryPart << "i\n";

	std::cout << "Solution 2: " << realPart << " - "
		<< imaginaryPart << "i\n";
}

void calcAndPrintReal(double a, double b, double discriminant)
{
	double solution1{ (-b + sqrt(discriminant)) / (2 * a) };
	double solution2{ (-b - sqrt(discriminant)) / (2 * a) };

	std::cout << "Solution 1: " << solution1 << '\n';

	if (solution1 != solution2)
		std::cout << "Solution 2: " << solution2 << '\n';
}

void calcAndPrintBhaskara(double a, double b, double c)
{
	double discriminant{ getDiscriminant(a, b, c) };

	if (discriminant < 0)
	{
		calcAndPrintImaginary(a, b, discriminant);
	}
	else
	{
		calcAndPrintReal(a, b, discriminant);
	}
}

int main()
{
	std::cout << "a = 2, b = 6, c = 4\n";
	calcAndPrintBhaskara(2.0, 6.0, 4.0);

	std::cout << "a = 1, b = 2, c = 1\n";
	calcAndPrintBhaskara(1.0, 2.0, 1.0);

	std::cout << "a = 2, b = 3, c = 4\n";
	calcAndPrintBhaskara(2.0, 3.0, 4.0);

	double a{ getUserInput('a') };
	std::cout << "a = " << a << '\n';
	std::cout << "a/3 = " << a/3 << '\n';

	double b{ getUserInput('b') };
	std::cout << "b = " << b << '\n';
	std::cout << "b/3 = " << b/3 << '\n';

	return 0;
}
