/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * Descripcion: Este programa fue creado para el curso de Pensamiento
 * Computacional Orientado a Objetos, y consiste en un creador de personajes
 * para el juego de mesa Dungeons and Dragons. El programa permite crear
 * personajes de diferentes razas y clases. El usuario puede elegir entre
 * 9 razas con distintas bonificaciones, así como 9 clases con diferentes 
 * armas y armaduras iniciales.
 */

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "headers/Menu.h" // Libreria para manejo de menus
#include "headers/Inicializador.h" // Libreria para inicializar datos
#include "headers/Funciones.h" // Libreria para funciones auxiliares
#include "headers/Personaje.h" // Libreria para manejo de personajes

int main()
{
    // Variables
    int opcion, opcionEnciclopedia;
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
            menuEnciclopedia();
            break;
        case 4:
            std::cout << "Gracias por usar el creador de personajes de D&D" << std::endl;
            pausa();
            break;
        default:
            std::cout << "Opcion no valida" << std::endl;
            pausa();
            break;
        }
        limpiarPantalla();
    } while (opcion != 4);

}
