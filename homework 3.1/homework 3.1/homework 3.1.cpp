#include <iostream>


class Calculator
{
private:
	double num1,
		   num2;
public:
	Calculator()
	{
		num1 = 0;
		num2 = 0;
	}

	void request()
	{
		std::cout << "Введите num1: " << std::endl;
		std::cin >> num1;
		std::cout << "Введите num2: " << std::endl;
		std::cin >> num2;
	}

	void actions()
	{
		std::cout << "Сложение:.................." << num1 + num2 << std::endl;
		std::cout << "Вычитание num2 из num1:...." << num1 - num2 << std::endl;
		std::cout << "Вычитание num1 из num2:...." << num2 - num1 << std::endl;
		std::cout << "Умножение:................." << num1 * num2 << std::endl;
		if (num1 != 0)
		{
			std::cout << "Деление num2 на num1:......" << num2 / num1 << std::endl;
		}
		else
		{
			std::cout << "<<< Соблюдайте правила арифметики!!! На ноль делить нельзя!!! >>>" << std::endl;
		}
		if (num2 != 0)
		{
			std::cout << "Деление num1 на num2:......" << num1 / num2 << std::endl;
		}
		else
		{
			std::cout << "<<< Соблюдайте правила арифметики!!! На ноль делить нельзя!!! >>>" << std::endl;
		}
	}
};


int main()
{
	setlocale(LC_ALL, "Russian");

	char choice;

	Calculator callCalc;

	for ( ; ; )
	{
		callCalc.request();
		callCalc.actions();

		std::cout << "Хотите продолжить? (y / n): " << std::endl;
		std::cin >> choice;
		if (choice != 'y' && choice != 'Y')
		{
			break;
		}
	}

	return 0;
}
