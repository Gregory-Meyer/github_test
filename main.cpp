#include "lib.hpp"

#include <iostream>

int main() {
	// go a lot faster
	std::ios_base::sync_with_stdio(false);

	lib::print(std::cout);
}