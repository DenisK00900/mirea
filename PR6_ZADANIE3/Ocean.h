#include <iostream>
#include <string>

using namespace std;

class Ocean
{
private:
	string name;
	float deep; //в метрах
	float size; //в тыс км2
public:
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

	friend ostream& operator<<(ostream& stream, Ocean obj);
};

