#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input; // return the value the user entered back to the caller
}

int main()
{
	int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}


// #include <iostream>

// int getValueFromUserUB() // this function returns an integer value
// {
//  	std::cout << "Enter an integer: ";
// 	int input{};
// 	std::cin >> input;

// 	// note: no return statement
// }

// int main()
// {
// 	int num { getValueFromUserUB() }; // initialize num with the return value of getValueFromUserUB()

// 	std::cout << num << " doubled is: " << num * 2 << '\n';

// 	return 0;
// }
