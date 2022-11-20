#include<iostream>
#include<string>
#include<cstdlib>

#include"headers\Funciones.h"
#include"headers\Personaje.h"
#include"headers\Estadisticas.h"
#include"headers\Raza.h"

int main() {

    int opcion;

    menuPrincipal();    
    std::cin >> opcion;
    
    switch (opcion)
    {
    case 1:
        crearPersonaje();
        break;
    }

}
