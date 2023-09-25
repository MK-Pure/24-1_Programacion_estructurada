// P005_Aritmeticos_V0.cpp :
// Carlos Enciso.
// Esta practica será un repaso de los operadores aritmeticos, Raiz y Potencia.


#include <iostream>
#include <math.h>

int main()
{   //Declaración de variables
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    //Solicitud de valor de numero
    std::cout << "Ingresa un numero: \n";
    //Esperar el dato del usuario
    std::cin >> a;
    //Solicitud de potencia
    std::cout << "Ingresa la potencia a la que lo quieres elevar: \n";
    //Espera del dato de potencia
    std::cin >> b;
    //Función pow(numero, potencia)
    //Para obtener la raiz debemos elevar el numero a la
    //fracción de potencia que queramos.
    //para raiz cuadrada pow(X,1/2)
    c = pow(a, b);
    std::cout << "La potencia es: " << c << std::endl;
    d = sqrt(c);
    c = pow(c, .3333);
    std::cout << "La raiz cuadrada del resultado es: " << c <<
        std::endl << d;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a / b;
    std::cout << "El resultado de la division es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a * b;
    std::cout << "El resultado de la multiplicacion es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a - b;
    std::cout << "El resultado de la resta es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = a + b;
    std::cout << "El resultado de la suma es: " << c << std::endl;

    std::cout << "Dime una cantidad de 0 a infinito ";
    std::cin >> a;
    std::cout << "Ahora dame otra cantidad ";
    std::cin >> b;
    c = pow(a, b);
    std::cout << "La pontencia es " << c << std::endl;
    c = pow(c, .5);
    std::cout << "La raiz cuadrada del resultado es: " << c <<
        std::endl << d;
}