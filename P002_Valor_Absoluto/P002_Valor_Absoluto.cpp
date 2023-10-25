// P002_Valor_Absoluto.cpp.
// Carlos Enciso

#include <iostream>

int main() 
{
    char decision;
    double numero;

    do
    {
        std::cout << "Introduce un numero: ";
        std::cin >> numero;

        // Calcula el valor absoluto.
        double valorAbsoluto = (numero < 0) ? -numero : numero;

        // Muestra el resultado
        std::cout << "El valor absoluto de " << numero << " es " << valorAbsoluto << std::endl;

        std::cout << "¿Desea calcular el valor absoluto de otro número? (S/N): ";
        std::cin >> decision;
    }
  while (decision == 'S' || decision == 's');
}