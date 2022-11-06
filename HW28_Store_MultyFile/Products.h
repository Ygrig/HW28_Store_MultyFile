#pragma once
#include <string>
#include <iostream>

struct product {
	std::string name;
	int number = 0;
	double price;
};

void print_prod(product& P);

double full_price(product& P);

double sell(product& P, int num);