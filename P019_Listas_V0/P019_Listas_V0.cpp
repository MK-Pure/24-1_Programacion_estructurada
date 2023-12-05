// P019_Listas_V0.cpp.
// Carlos Enciso. 

#include <iostream>
#include <string>

// Definición de la estructura del nodo
struct NodoCuerpo {
    std::string parte;
    int variable;
    NodoCuerpo* siguiente;
};

int main() {
    // Creación de nodos
    NodoCuerpo* cabeza = new NodoCuerpo;
    cabeza->parte = "Cabeza";
    cabeza->variable = 1;
    cabeza->siguiente = nullptr;

    NodoCuerpo* torso = new NodoCuerpo;
    torso->parte = "Torso";
    torso->variable = 2;
    torso->siguiente = nullptr;

    NodoCuerpo* pies = new NodoCuerpo;
    pies->parte = "Pies";
    pies->variable = 3;
    pies->siguiente = nullptr;

    // Imprimir variables almacenadas en los nodos
    std::cout << "Parte del cuerpo: " << cabeza->parte << ", Variable: " << cabeza->variable << "\n";
    std::cout << "Parte del cuerpo: " << torso->parte << ", Variable: " << torso->variable << "\n";
    std::cout << "Parte del cuerpo: " << pies->parte << ", Variable: " << pies->variable << "\n";

    // Liberar la memoria
    delete cabeza;
    delete torso;
    delete pies;

    return 0;
}
