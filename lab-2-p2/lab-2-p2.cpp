#include <iostream>

int main()
{
	std::cout << "Number: ";
	int num;
	std::cin >> num;
	int firstNumber = num / 100;
	int secondNumber = (num / 10) % 10;
	int thirdNumber = num % 10;
	int sum = firstNumber + secondNumber + thirdNumber;
	int mul = firstNumber * secondNumber * thirdNumber;
	std::cout << "Sum = " << sum << "; Mul = " << mul << std::endl;
}