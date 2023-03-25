#pragma once
#include "Sea.h"
class Zaliv:
	public Sea
{
private:
	string name;
	float deep;
	float size;
public:
	Zaliv()
	{
		name = "Безымянный";
		deep = 1;
		size = 1;
	}
	Zaliv(string N, float D, float S)
	{
		name = N;
		deep = D;
		size = S;
	}

	void setName(string N);
	void setDeep(float D);
	void setSize(float S);

	friend ostream& operator<<(ostream& stream, const Zaliv obj);
	friend istream& operator<<(istream& stream, Zaliv obj);
};