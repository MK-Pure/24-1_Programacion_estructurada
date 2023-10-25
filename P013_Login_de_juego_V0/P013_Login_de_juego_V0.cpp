// P013_Login_de_juego_V0.cpp
// Carlos Enciso.

#include <iostream>
#include <string>

int main() {
    std::string usuario;
    std::string contrasena;
    int intentos = 0;

    std::cout << "-------- Bienvenido a la pagina de inicio --------\n";
    std::cout << "-------- Ingresa tu usuario y contraseña --------\n";

    do
    {

        std::cout << "-------- Usuario:";
        std::cin >> usuario;
        system("cls");
        std::cout << "-------- Contraseña:";
        std::cin >> contrasena;
        system("cls");

        if (usuario == "MKPure" && contrasena == "elver_galarga") 
        {

            std::cout << "------- Bienvenido de nuevo MKPure. -------\n";
            break;

        }
        else
        {

            std::cout << "+++ Inténtalo nuevamente, el usuario o la contraseña son incorrectos. +++\n";
            intentos++;

            if (intentos >= 3)
            {

                std::cout << "Demasiados intentos fallidos. Bloqueando el acceso.\n";
                break;

            }
        }

        std::cout << "¿Deseas reintentar? (0 - NO / 1 - SI): ";
        std::cin >> intentos;
        system("cls");

    } 
    while (intentos);
}
