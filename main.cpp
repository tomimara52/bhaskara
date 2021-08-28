#include <iostream>
#include <cmath>

double getDiscriminant(double a, double b, double c)
{
	return pow(b, 2) - (4 * a * c);
}

int main()
{
	std::cout << "a = 1, b = 4, c = 2\n";
	std::cout << "discriminant: " << getDiscriminant(1.0, 4.0, 2.0) << '\n';

	std::cout << "a = 4, b = -7, c = 21\n";
	std::cout << "discriminant: " << getDiscriminant(4.0, -7.0, 21.0) << '\n';

	std::cout << "a = 1.23, b = -7, c = 21\n";
	std::cout << "discriminant: " << getDiscriminant(1.23, -7.0, 21.0) << '\n';

	return 0;
}
