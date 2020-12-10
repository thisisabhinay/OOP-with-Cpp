// Four function calculator for fractions

/*

For this program, the concepts I need to clear are;
- Basic decision control statements
- Parsing the text from console std::cin

*/

// TODO: RETURN BACK TO THIS CODE AND FIX IT. USER CHOICE IS NOT WORKING. LOOP TERMINATES ABRUPTLY

#include <iostream>

int main() {

	char choice;

	do {
		char fraction[8];
		int numerator, denominator;
		int a, b, c, d;

		choice = 'n'; // Reset to default choice in order to avoid infinite loop

		std::cout << "Enter fraction: ";
		std::cin.get(fraction, 8);

		// - '0' is use to convert the character representation of int into an actual integer
		a = fraction[0] - '0';
		b = fraction[2] - '0';
		c = fraction[4] - '0';
		d = fraction[6] - '0';

		// For debugging:
		//std::cout <<"A="<< a << " B=" << b << " C=" << c << " D=" << d << std::endl;

		// Calculator logic starts here
		switch (fraction[3]) {
		case '+':
			numerator = (a * d) + (b * c);
			denominator = b * d;
			break;

		case '-':
			numerator = (a * d) - (b * c);
			denominator = b * d;
			break;

		case '*':
			numerator = (a * c);
			denominator = b * d;
			break;

		case '/':
			numerator = (a * d);
			denominator = b * c;
			break;

		default:
			std::cout << "Invalid operator found! Try again.";
		}

		std::cout << "Result: " << numerator << "/" << denominator << std::endl;
		std::cout << "Want to try more? [Y/N]: ";
		std::cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}