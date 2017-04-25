#include <iostream>

int main(){

	double americanDollars, total;
	char currency;

	std::cout << "What currency would you like to exchange to?\n Canadian Dollars (c)\n Euros (e)\n Indian Rupees (i)\n ";	
	std::cout << "Japanese Yen (j)\n Mexican Peso (m)\n South African Rand (s)\n or British Pound (b)?\n";
	std::cout << "Please enter which letter you'd like to exchange to: ";
	std::cin >> currency;
	
	switch (currency){
		case 'c':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * 0.9813;
			std::cout << "You have " << total << " Canadian Dollars" << std::endl;
			break;
		case 'e':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * 0.757;
			std::cout << "You have " << total << " Euros" << std::endl;
			break;
		case 'i':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * 52.53;
			std::cout << "You have " << total << " Indian Rupees" << std::endl;
			break;
		case 'j':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * 80.92;
			std::cout << "You have " << total << " Japanese Yen" << std::endl;
			break;
		case 'm':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * 13.1544;
			std::cout << "You have " << total << " Mexican Pesos" << std::endl;
			break;
		case 's':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * 7.7522;
			std::cout << "You have " << total << " South African Rand" << std::endl;
			break;
		case 'b':
			std::cout << "How many American dollars do you have? ";
			std::cin >> americanDollars;
			total = americanDollars * .6178;
			std::cout << "You have " << total << " British Pounds" << std::endl;
			break;

	}

	return 0;
}