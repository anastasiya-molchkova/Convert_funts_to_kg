/* Напишите программу пересчёта веса из фунтов в килограммы (1 фунт = 0.453 кг).*/

#include <iostream>

// получаем от пользователя количество фунтов
double get_pounds()
{
	std::cout << "Введите количество фунтов: ";
	double answer;
	std::cin >> answer;
	while (std::cin.fail() || (answer < 0))
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Ошибка! Повторите ввод: ";
		std::cin >> answer;
	}
	return answer;
}

// считаем и выводим килограммы по фунтам
void calculate_kg(const double pounds)
{
	static const double kg_in_one_pound = 0.453592;  // так как константа статическая, она создаётся только один раз
	std::cout << pounds << " ф. = " << pounds * kg_in_one_pound << " кг." << std::endl << std::endl;
}

int main()
{
	setlocale(LC_CTYPE, "rus"); // для вывода сообщений на кириллице
	while (true)
	{
		calculate_kg(get_pounds());
	}
}