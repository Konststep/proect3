#include <iostream>

int main()
{
	bool a = true, b = false;

	std::cout << std::boolalpha;

	std::cout << "||" << std::endl;
	
	std::cout << a << "\t" << a << "\t" << "true" << std::endl;
	std::cout << a << "\t" << b << "\t" << "true" << std::endl;
	std::cout << b << "\t" << a << "\t" << "true" << std::endl;
	std::cout << b << "\t" << b << "\t" << "false" << std::endl;
	
	std::cout << "&&" << std::endl;
	std::cout << a << "\t" << a << "\t" << "true" << std::endl;
	std::cout << a << "\t" << b << "\t" << "false" << std::endl;
	std::cout << b << "\t" << a << "\t" << "false" << std::endl;
	std::cout << b << "\t" << b << "\t" << "false" << std::endl;


	return EXIT_SUCCESS;
}