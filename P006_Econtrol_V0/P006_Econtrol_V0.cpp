// P006_Econtrol_V0.cpp
// Carlos Enciso.
// Sintaxys de las estructuras de control.
//

#include <iostream>
#include <locale.h>
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
            std::cout << "derrotaste al troll y encontraste una princesa";

        }
    }
}


