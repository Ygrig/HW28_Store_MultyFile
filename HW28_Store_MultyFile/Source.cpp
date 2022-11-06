#include <iostream>
#include <string>
#include "products.h" 

int main() {
	int n;

	product dress = { "Gabrielle dress", 100, 120.70 };
	std::cout << "Product information: \n";
	print_prod(dress);
	std::cout << '\n';
	std::cout << "Total price of product in-stock: " << full_price(dress) << '\n';

	std::cout << "Enter the number of products sold: ";
	std::cin >> n;

	std::cout << "Total price of product sold: " << sell(dress, n) << '\n';

	return 0;
}