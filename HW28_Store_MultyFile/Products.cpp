#include "products.h"
#include <iostream>

void print_prod (product& P) {
	std::cout << "Name: " << P.name << '\n';
	std::cout << "Number: " << P.number << '\n';
	std::cout << "Price: " << P.price << '\n';
}

double full_price(product& P) {
	return P.number * P.price;
}

double sell(product& P, int num) {
	return P.price * num;
}