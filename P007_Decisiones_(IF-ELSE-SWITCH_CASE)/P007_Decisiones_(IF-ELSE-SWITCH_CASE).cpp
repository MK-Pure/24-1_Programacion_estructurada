// P007 Decisiones (IF-ELSE-SWITCH CASE).cpp.
// Carlos Enciso.
// Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//  1.- Royal Rumble 2.- Eliminatoria directa 3.- Grupos, semifinal y final

#include <iostream>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "es_Mx.UTF-8");

    int opc;
    float ganador;
    bool perdedor = false;
    int rropc;
    int elimination;
    int torneoe;
    int num;
    // Elimination Chamber (eliminacion) 
    // torneo (gurpos, semifinal y final)

    std::cout << "Hola bienvenido a la arena \n";
    std::cout << "que te gustaria jugar? /n 1.- royal rumble , 2.-Elimination Chamber 3.- torneo \n ";
    std::cin >> opc;

    switch (opc)
    {
    case 1:
        ganador = 1, 3, 6, 27, 10, 13, 15, 20;


        std::cout << "Bienvenido al modo royal rumble. \n";
        std::cout << "de cuantos luchadores sera tu royal rumble. \n";
        std::cout << "1- 10 Luchadores , 2- 20 Luchadores , 3- 30Luchadores. \n";
        std::cin >> rropc;

        switch (rropc)
        {
        case 1:
            std::cout << "Has elegido la opcion de 10 luchadores \n";
            std::cout << "elije un numero del 1 al 10 \n";
            std::cin >> num;

            if (num == ganador)
            {
                std::cout << "felicidades haz ganado. \n";
            }
            else
            {


                std::cout << "lo siento has perdido. \n";

            }

            break;
        case 2:
            std::cout << "Has elegido la opcion de 20 luchadores. \n";
            std::cout << "elije un numero del 1 al 20. \n";
            std::cin >> num;

            if (num == ganador)
            {
                std::cout << "felicidades haz ganado. \n";
            }
            else
            {


                std::cout << "lo siento has perdido.\n";

            }
            break;
        case 3:
            std::cout << "Has elegido la opcion de 30 luchadores. \n";
            std::cout << "elije un numero del 1 al 30. \n";
            std::cin >> num;

            if (num == ganador)
            {
                std::cout << "felicidades haz ganado. \n";
            }
            else
            {


                std::cout << "lo siento has perdido. \n";

            }
        default:
            break;
        }

    case 2:
        std::cout << "Bienvenido al modo Elimination Chamber\n";
        std::cout << "Elije el numero de entrada de tu luchador\n";
        std::cout << "elije un numero del 1 al 6\n";
        std::cin >> num;

        if (num == ganador)
        {
            std::cout << "felicidades haz ganado. \n";
            std::cout << "ahora eres el nuevo campeon mundial\n";

        }
        else
        {


            std::cout << "lo siento has perdido. \n";

        }


    case 3:
        std::cout << "Bienvenido al modo torneo\n";
        std::cout << "Escoge un numero para el torneo del 1 al 16\n";
        std::cin >> num;

        if (num == ganador)
        {
            std::cout << "felicidades haz ganado. \n";
            std::cout << "ahora eres el nuevo campeon mundial. \n";
        }
        else
        {
            std::cout << "lo siento has perdido. \n";
        }


    }