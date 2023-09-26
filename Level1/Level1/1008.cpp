// 1008 A/B

#include <iostream>
#include <iomanip> 

int main()
{

	double A, B;

	std::cin >> A;
	std::cin >> B;

	std::cout.precision(9);
	std::cout << std::fixed; // std::fixed¸¦ »ç¿ë

	std::cout << A / B;

	return 0;
};

