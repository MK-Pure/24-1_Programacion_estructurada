// P006_EControl_V0.cpp.
// Solicitar al usuario datos para realizar decisiones simples.
// Carlos Enciso.


#include <iostream>
#include <locale>
#include <string>

int main()
{
    int mayor_edad = 18;
    if (mayor_edad < 18)
    {
        std::cout << "Bienvenido al bar de mou \n"
            << "como eres mayor de edad puedes bever cerveza \n";
    }
    else
    {
        std::cout << "Sal de aqui ratita \n";
    }

    //Dungeon
    bool llave1, llave2;
    std::string Cal1 = "calabozo1", Cal2 = "Calabozo 2";
    std::cout << "Bienvenido caballero te encontraste con una patona" <<
        "Qeu haces? 1.- Atacar 0.- Huir \n";
    std::cin >> llave1;
    if (llave1 == true)
    {
        std::cout << "Que valiente eres, acabas de ingresar al " << Cal1 <<
            "Te encontraste con un troll, que deseas hacer? \n" <<
            "1.- Atacar 0.- Huir \n";
        std::cin >> llave2;
        if (llave2 == true)
        {
            std::cout << "derrotaste al troll y encontraste una princesa"; <<
                " Como eres un caballero la llevas a su reyno donde " <<
                "Te encueran porque piensan que tu la secuestraste \n";
        }
        else
        {
            std::cout << "Mariconsazo \n";
        }
    }
    else
    {
        std::cout << "Ni una araña al chile? \n";
    }
    //Sintaxys de SWITCH CASE
    int opc = 0;
    std::cout << "Que opción deseas realizar? \n 1.- Suma\n 2.- Resta\n" <<
        "3.- Multiplicación \n";

    std::cin >> opc;
    int a = 1, b = 1;
    switch (opc)
    {
    case 1:
        std::cout << "La suma es: " << a + b;
        break;

    case 2:
        a = 1;
        b = 1;
        std::cout << "La resta es: " << a - b;
        break;

    case 3:
        std::cout << "La multiplicación es: " << a * b;
        break;

    default:
        std::cout << "Esa opcion no me la se.\n";
    }
}
