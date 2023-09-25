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

    bool  mi_primer_booleano = true;
    int   mi_primer_entero = 100;
    float mi_primer_flotante = 0.0;
    char  mi_primer_caracter = 'a';
    char  mi_primer_cadenadecaracteres[100] = "Hola Vato";
    std::string mi_primer_string = "Que onda chaviza";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos dias carlos, espero estes bien\n";

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

    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;


        //Solicitar al usuario cambios a las variables

    std::cout << "Usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_booleano;
    std::cout << "En el booleano tienes guardado:" <<
        mi_primer_booleano << std::endl;

    std::cout << "Ahora un numero entre 0 y 100;" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "En el numero entero tienes guardado:" <<
        mi_primer_entero << std::endl;

    std::cout << "Ahora un numero entre 0.0 y 100.0;" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "En el flotante tienes;" <<
        mi_primer_flotante << std::endl;

    std::cout << "Ahora un caracter;" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "En el caracter tienes guardado:" <<
        mi_primer_caracter << std::endl;

    std::cout << "Ahora una cadena de caracters;" <<
        std::endl;
    std::cin >> mi_primer_cadenadecaracteres;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenadecaracteres << std::endl;

    std::cout << "finalmente, un string;" <<
        std::endl;
    std::cin >> mi_primer_string;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;
        
    //Solicitar al usuario cada una de las variables.

    // Realizar operaciones
    float a, b, d, c;
    a = 285;
    b = 5;
    d = a;
    c = a / b;
    std::cout << "El resultado de la division es: " << c << std::endl;
    c = a + b;
    std::cout << "El resultado de la suma es: " << c << std::endl;
    c = a - b;
    std::cout << "El resultado de la resta es: " << c << std::endl;
    c = a * b;
    std::cout << "El resultado de la multiplicacion es: " << c << std::endl;
    c = d * a;
    std::cout << "El resultado de la multiplicacion de caracteres es: " << c << std::endl;
}
