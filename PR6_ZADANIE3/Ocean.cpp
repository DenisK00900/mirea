#include "Ocean.h"

ostream& operator<<(ostream& stream, Ocean obj)
{
	stream << obj.name << " ";
	stream << "�������: " << obj.deep << "� ";
	stream << "������: " << obj.size << "��� ��2 ";

	return stream;
}