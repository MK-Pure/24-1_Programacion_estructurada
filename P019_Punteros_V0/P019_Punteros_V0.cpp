// P019_Punteros_V0.cpp.
// Carlos Enciso.

#include <iostream>

int main()
{
    int variable = 0;
    int* apuntador = &variable;

    std::cout << "El valor de la variable es: " << variable
        << std::endl;
    *apuntador = 20;
    std::cout << "El valor de la variable es: " << variable
        << std::endl;

    apuntador = NULL;
}


