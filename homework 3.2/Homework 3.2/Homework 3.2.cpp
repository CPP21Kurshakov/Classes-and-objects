#include <iostream>
#include <string>
#include <Windows.h>

class Counter
{
private:
	int count;

public:
	Counter() : count(0) {};

	void initV (int val)
	{
		count = val;
	}

	void inc()
	{
		count++;
	}

	void dec()
	{
		--count;
	}

	int equals ()
	{
		return count;
	}
};



int main()
{
	setlocale (LC_ALL, "Russian");
	SetConsoleCP(1251);

	Counter counter;

	int mng;
	std::string choice;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> choice;

	if (choice == "да")
	{
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> mng;
		counter.initV(mng);
	}

	for (; ; )
	{
		std::cout << "Введите команду ( '+', '-', '=' или 'x'): ";
		std::cin >> choice;

		if (choice == "+")
		{
			counter.inc();
		}
		if (choice == "-")
		{
			counter.dec();
		}
		if (choice == "=")
		{
			std::cout << counter.equals() << std::endl;
		}
		if (choice == "x")
		{
			std::cout << "До свидания!" << std::endl;
			break;
		}
	}

	return 0;
}
