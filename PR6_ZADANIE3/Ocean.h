#include <iostream>
#include <string>

using namespace std;

class Ocean
{
private:
	string name;
	float deep; //? ??????
	float size; //? ??? ??2
public:
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
	string NamesZaliv[8] = {
		"Джинанский",
		"Ворстонский",
		"Новорассветный",
		"Байкальский",
		"Ломоносовский",
		"Тропический",
		"Трамиский",
		"Апрельский",
	};

	Ocean()
	{
		name = "Безымянный";
		deep = 1;
		size = 1;
	}
	Ocean(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Ocean obj);
	friend istream& operator<<(istream& stream, Ocean obj);
};

