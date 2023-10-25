// P011 Condicionales.cpp
// Carlos Enciso.


#include <iostream>
#include <locale>
#include <string>

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF - 8" );
    std::cout << "Piensa en cualquier personaje de Azur Lane." << std::endl;
    std::cout << "Por favor responde a las preguntas con s (si) o n (no)." << std::endl;
    std::string respuesta;
    bool repetir = true;

    while (repetir)
    {
        // Pregunta 1.
        std::cout << "Es hombre o mujer? (s/n): ";
        std::cin >> respuesta;

        if (respuesta == "s")
        {
            // Pregunta 2.
            std::cout << "Tiene pelo blanco? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == "s")
            {
                // Pregunta 3.
                std::cout << "Usa una espada? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s")
                {
                    // Pregunta 4.
                    std::cout << "Tiene orejas de conejo? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s")
                    {
                        // Pregunta 5.
                        std::cout << "Tiene ojos cafes? (s/n): ";
                        std::cin >> respuesta;

                        if (respuesta == "s")
                            std::cout << "Estás pensando en Shimakaze." << std::endl;
                        else
                            std::cout << "No puedo adivinar el personaje que estás pensando." << std::endl;
                    }
                    else
                    {
                        std::cout << "No puedo adivinar el personaje que estás pensando." << std::endl;
                    }
                }
            }
        }

        std::string reiniciar;
        std::cout << "Deseas reiniciar? (SI/NO): ";
        std::cin >> reiniciar;
        if (reiniciar != "SI" && reiniciar != "si")
        {
            repetir = false;
        }
    }

    return 0;
}

