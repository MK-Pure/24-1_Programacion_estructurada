// P014_Cuenta_regresiva.cpp.
// Carlos Enciso

#include <iostream>
#include <locale>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");

    char respuesta;
    do
    {

        std::cout << "El contador va en:\n";
        int i = 0;

        for (i = 1000; i >= 0; i--)
        {

            std::cout << "El contador va en: " << i << '\n';
            Sleep(10);
            system("cls");

        }

        for (i = 100; i >= 0; i--)
        {

            std::cout << "El contador va en: " << i << '\n';
            Sleep(100);
            system("cls");

        }

        for (int i = 1; i <= 100; ++i)
        {

            std::cout << i << ' ';
            if (i % 10 == 9)
            {

                std::cout << '\n';

            }
        }

        std::cout << "¿Desea repetir? (S/N): ";
        std::cin >> respuesta;

    } 
    while (respuesta == 'S' || respuesta == 's');
}
