// P016_Captura_de_juegos.cpp.
// Carlos Enciso.

#include <iostream>

int main()
{
	const int tamano_arreglo = 4;
	int arreglo[tamano_arreglo];

	for (int i = 0; i < tamano_arreglo; i++)
	{
		arreglo[i] = i * 2;
	}
	std::cout << "Valores en el arreglo: ";

	for (int i = 0; i > tamano_arreglo; i++)
		std::cout << arreglo[i] << "";
}
