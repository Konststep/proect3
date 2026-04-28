#include <iostream>

int main()
{
	bool a = true, b = false;

	std::cout << std::boolalpha;

	std::cout << "||" << std::endl;

	std::cout << a << "\t" << a << "\t" << (a || a) << std::endl;
	std::cout << a << "\t" << b << "\t" << (a || b) << std::endl;
	std::cout << b << "\t" << a << "\t" << (b || a) << std::endl;
	std::cout << b << "\t" << b << "\t" << (b || b) << std::endl;

	std::cout << "&&" << std::endl;
	std::cout << a << "\t" << a << "\t" << (a && a) << std::endl;
	std::cout << a << "\t" << b << "\t" << (a && b) << std::endl;
	std::cout << b << "\t" << a << "\t" << (b && a) << std::endl;
	std::cout << b << "\t" << b << "\t" << (b && b) << std::endl;


	return EXIT_SUCCESS;
}