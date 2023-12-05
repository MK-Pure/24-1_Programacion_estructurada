// P016_Captura_de_juegos.cpp.
// Carlos Enciso.

#include <iostream>
#include <string>

int main()
{
    const int tamano_arreglo = 5;
    int arreglo[tamano_arreglo];

    for (int i = 0; i < tamano_arreglo; i++) 
    {

        std::cout << "Introduce un valor para el elemento " << i << ": ";
        std::cin >> arreglo[i];
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
        std::cout << "Valores en el arreglo: ";

    for (int i = 0; i < tamano_arreglo; i++) 
    {
        
        std::cout << arreglo[i] << " ";
        
    }
}
