// Archivo principal

#include <iostream>
#include <string>
#include <cstdlib>

#include "headers\Inicializador.h"
#include "headers\Funciones.h"
#include "headers\Personaje.h"
#include "headers\Estadisticas.h"
#include "headers\Raza.h"

int main()
{
    int opcion;
    Personaje personaje;

    do {
        menuPrincipal();
        std::cin >> opcion;
        limpiarPantalla();
        switch (opcion)
        {
        case 1:
            crearPersonaje(personaje);
            pausa();
            break;
        case 2:
            if (personaje.getNombre() == " ") {
                std::cout << "No hay ningun personaje creado" << std::endl;
            }
            else {
                personaje.mostrarPersonaje();
            }
            pausa();
            break;
        case 3:
            std::cout << "Gracias por usar el creador de personajes de D&D" << std::endl;
            pausa();
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            pausa();
            break;
        }
        limpiarPantalla();
    } while (opcion != 3);

}
