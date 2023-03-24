#include "Ocean.h"

ostream& operator<<(ostream& stream, Ocean obj)
{
	stream << obj.name << " ";
	stream << "Глубина: " << obj.deep << "м ";
	stream << "Размер: " << obj.size << "тыс км2 ";

	return stream;
}