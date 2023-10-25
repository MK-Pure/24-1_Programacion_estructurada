// P012_Ciclo_de_juego_infinito_V0.cpp
// Carlos Enciso.

#include <iostream>
#include <string>

int main()
{
    std::string respuesta;
    bool seguir = true;
    int vidas = 3;

    do 
    {

        int vidas = 3;
        std::cout << "En este juego tienes " << vidas << " vidas.\n"
            << "Dependiendo de tus decisiones perderás vidas.\n"
            << "¿Quieres jugar? (s = Si, n = NO): ";
        std::cin >> respuesta;

        if (respuesta == "s")
        {

            std::cout << "Comenzando el juego...\n";

            while (vidas > 0)
            {
                std::cout << "Te quedan " << vidas << " vidas.\n";
                std::cout << "¿Quieres continuar? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s")
                {

                    std::cout << "Perdiste una vida. Te quedan " << --vidas << " vidas.\n";
                    if (vidas == 0) {
                        std::cout << "Has perdido todas tus vidas. GAME OVER.\n";
                        break;

                    }
                }
                else
                {

                    std::cout << "No estas tan estupido como parece, felicidades.\n";
                    seguir = false;
                    break;

                }
            }
        }

        else
        {

            std::cout << "Gracias por jugar. ¡Hasta la próxima!\n";
            seguir = false;

        }
    } 
    while (seguir);
}
