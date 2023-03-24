#include <iostream>
#include <ctime>
//#include "Ocean.h"
#include "Sea.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string NamesOcean[8] = {
	"Южный",
	"Красный",
	"Лименский",
	"Зоронский",
	"Советский",
	"Атматический",
	"Орлеанский",
	"Солнечный",
	};
	string NamesSea[8] = {
		"Унарное",
		"Арабское",
		"Кабанье",
		"Сильное",
		"Франзенское",
		"Белорусское",
		"Батинское",
		"Мирное",
	};

	srand(time(NULL));
	Ocean Ocean1(NamesOcean[rand() % 8], rand() % 8500 + 3500, (rand() % 1000000 + 200000)/10.0);
	Sea Sea1(NamesSea[rand() % 8], rand() % 8500 + 3500, (rand() % 100000 + 20000) / 10.0);
	cout << Ocean1;
	cout << "\n";
	cout << " " << Sea1;

	return 0;
}

