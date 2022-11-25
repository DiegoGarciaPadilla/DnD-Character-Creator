#include <iostream>
#include <string>
#include <cstdlib>

#include "headers\Funciones.h"
#include "headers\Personaje.h"
#include "headers\Estadisticas.h"
#include "headers\Raza.h"

int main()
{

    int opcion;
    Personaje personaje;

    do
    {
        menuPrincipal();
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            limpiarPantalla();
            personaje = crearPersonaje();
            pausa();
            break;
        case 2:
            limpiarPantalla();
            if (personaje.getNombre() != " ")
            {
                personaje.mostrarDatos();
            }
            else
            {
                std::cout << "No hay personaje creado" << std::endl;
            }
            pausa();
            break;
        case 3:
            break;
        default:
            break;
        }
    } while (opcion != 3);

    return 0;
}
