// P006_EControl_V0.cpp.
// Solicitar al usuario datos para realizar decisiones simples.
// Carlos Enciso.


#include <iostream>
#include <locale>
#include <string>

int main()
{
    //Dungeon
    bool llave1, llave2;
    std::string Cal1 = "Calabozo 1", Cal2 = "Calabozo 2";
    std::cout << "Bienvenido caballero te encontraste con una patona, " <<
        " Que haces? 1.- Atacar 0.- Huir \n";
    std::cin >> llave1;
    if (llave1 == true)
    {
        std::cout << "Que valiente eres, acabas de ingresar al " << Cal1 <<
            " Y te encontraste con un troll, que deseas hacer? \n" <<
            "1.- Atacar 0.- Huir \n";
        std::cin >> llave2;
        if (llave2 == true)
        {
            std::cout << "Derrotaste al troll y encontraste una princesa, " <<
                "Como eres un caballero la llevas a su reyno donde te encueran porque piensan que tu la secuestraste. \n" <<
                "Tragico. \n";
                
        }
        else
        {
            std::cout << "Mariconsazo \n";
        }
    }
    else
    {
        std::cout << "Ni una araña, al chile? \n";
    }
    //Sintaxys de SWITCH CASE
    int opc = 0;
    std::cout << "\nQue opcion deseas realizar? \n 1.- Suma\n 2.- Resta\n" <<
        " 3.- Multiplicación \n";

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
        std::cout << "La multiplicacion es: " << a * b;
        break;

    default:
        std::cout << "Esa opcion no me la se carnal.\n";
    }
}
