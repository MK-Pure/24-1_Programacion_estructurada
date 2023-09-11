// P003_Variables_V0.cpp :
// Carlos Enciso.
// Este programa tendra impresion de pantalla.
// Creacion de Variables.
// Inicializacion de variables.
// Solicitud de variables al usuario.
//

#include <iostream>
#include <string>

int main()
{
    //Variables Creacion
    //tipo de variable "nombre de la variable" = "inicializacion"

    bool    mi_primer_booleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenadecaracteres[100] = "Hola Vato";
    std::string mi_primer_string = "Que onda chaviza";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos dias mau espero estes bien\n";

    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_booleano << std::endl;

    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;

    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;

    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;

    std::cout << "En la cadena de caracteres tienes guardado: " <<
        mi_primer_cadenadecaracteres << std::endl;


        //Solicitar al usuario cambios
    std::cout << "Usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado:" <<
        mi_primer_booleano << std::endl;

    std::cout << "Ahora un numero entero;" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el numero entero tienes guardado:" <<
        mi_primer_entero << std::endl;

    std::cout << "Ahora un flotante;" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el flotante tienes;" <<
        mi_primer_flotante << std::endl;

    std::cout << "Ahora un caracter;" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En tu caracter tienes guardado:" <<
        mi_primer_caracter << std::endl;


        
    //Solicitar al usuario cada una de las variables.

}
