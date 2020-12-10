// fibo.cpp
// Demonstartes while loop using fibonacci series

#include <iostream>

int _main() {
	const unsigned long limit = 4294967295; //largest unsigned longest int
	unsigned long last = 0; // last to current printed term
	unsigned long current = 1; // current term

	while (current < limit / 2) { // don't let results get too big
		long sum;

		std::cout << current << " ";
		sum = current + last;
		last = current;
		current = sum;
	}

	std::cout << std::endl;
	return 0;
}