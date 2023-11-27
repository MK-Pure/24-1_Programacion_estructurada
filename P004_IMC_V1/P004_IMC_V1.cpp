// Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Carlos Enciso.
// Realizar un consultorio medico en el cual se solicite 3 bool, 2 string, 1 char, y 1 float.
// Al final entrega tu IMC.


#include <iostream>
#include <locale.h>



int main()
{

    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombre;
    std::string relato;
    bool  sintoma1, sintoma2, sintoma3;
    char  sexo;
    int   edad;
    int   peso;
    float altura;
    float IMC;

    std::cout << "Tienes fiebre?;" <<
        std::endl;
    std::cin >> sintoma1 <<
        std::endl;

    std::cout << "Tienes dolores de cabeza?;" <<
        std::endl;
    std::cin >> sintoma2;

    std::cout << "-Tienes cuerpo cortado? ;" <<
        std::endl;
    std::cin >> sintoma3;

    std::cout << "Como te llamas?;" <<
        std::endl;
    std::cin >> nombre;

    std::cout << "Cuentame tu historia ;" <<
        std::endl;
    std::cin >> relato;

    std::cout << "Eres Hombre(H) o Mujer(M)?;" <<
        std::endl;
    std::cin >> sexo;

    std::cout << "Cuantos pesas? ;" <<
        std::endl;
    std::cin >> peso;

    std::cout << " Cuantos años tienes_;" <<
        std::endl;
    std::cin >> edad;

    std::cout << "Cuanto mides?;" <<
        std::endl;
    std::cin >> altura;

    IMC = peso / altura;
    std::cout << "Tu indice de masa corporal es..." << IMC << std::endl;

}
