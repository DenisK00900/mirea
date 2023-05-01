#include <iostream>
#include <Ctime>

using namespace std;

template <typename Type> void sort(Type* A)
{
	Type b;
	int size = 16;
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size - 1; j++) 
		{
			if (A[j] > A[j + 1]) 
			{
				b = A[j];
				A[j] = A[j + 1];
				A[j + 1] = b;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	int size = 16;

	int* Ai = new int[size];
	float* Af = new float[size];
	string* As = new string[size];

	
	for (int i = 0; i < size; i++)
	{
		Ai[i] = rand() % 100;
		Af[i] = (rand() % 10000)/100.0;
		int is = rand() % 12 + 1;
		for (int j = 0; j < is; j++)
		{
			int R = rand() % 3;
			if (R == 0) As[j] = As[j] + "A";
			if (R == 1) As[j] = As[j] + "B";
			if (R == 2) As[j] = As[j] + "C";
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << Ai[i] << " ";
	}
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << Af[i] << " ";
	}
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << As[i] << " ";
	}
	cout << "\n";
	cout << "\n";
	cout << "\n";

	sort<int>(Ai);
	sort<float>(Af);
	sort<string>(As);

	for (int i = 0; i < size; i++)
	{
		cout << Ai[i] << " ";
	}
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << Af[i] << " ";
	}
	cout << "\n";
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		cout << As[i] << " ";
	}
	cout << "\n";

	return 0;
}