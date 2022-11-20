#include<iostream>
#include<string>
#include<cstdlib>
#include"headers\Personaje.h"
#include"headers\Estadisticas.h"
#include"headers\Raza.h"

void mostrarMenu(){
    std::cout << "1. Crear personaje" << std::endl;
    std::cout << "2. Mostrar personaje" << std::endl;
    std::cout << "3. Salir" << std::endl;
}

int main() {

    Raza* razas = inicializarRazas();

    std::string nombre, genero, alineamiento;
    int edad, op;
    Personaje personaje;
    Raza raza = Raza();
    Estadisticas stats = Estadisticas();

    std::cout << "¡Bienvenido aventurero/a! Presione enter para continuar:" << std::endl;
    std::cin.get();

    std::cout << "¿Cuál es tu nombre?" << std::endl;
    std::cin >> nombre;
    personaje.setNombre(nombre);


    std::cout << "¿Cuál es tu género?" << std::endl;
    std::cout << "1. Masculino" << std::endl;
    std::cout << "2. Femenino" << std::endl;
    std::cout << "3. Otro" << std::endl;
    std::cin >> op;
    do{
        switch (op){
        case 1:
            genero = "Masculino";
            break;
        case 2:
            genero = "Femenino";
            break;
        case 3:
            genero = "Otro";
            break;
        default:
            std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
            std::cin >> op;
            break;
        }
    } while (op != 1 && op != 2 && op != 3);
    personaje.setGenero(genero);

    std::cout << "¿Cuál es tu edad?" << std::endl;
    std::cin >> edad;
    while (edad < 0){
        std::cout << "Vaya, parece que has introducido una edad no válida. Inténtalo de nuevo." << std::endl;
        std::cin >> edad;
    }
    personaje.setEdad(edad);

    std::cout << "¿Cuál es tu alineamiento?" << std::endl;
    std::cout << "1. Caótico bueno" << std::endl;
    std::cout << "2. Caótico neutro" << std::endl;
    std::cout << "3. Caótico malo" << std::endl;
    std::cout << "4. Neutral bueno" << std::endl;
    std::cout << "5. Neutral" << std::endl;
    std::cout << "6. Neutral malo" << std::endl;
    std::cout << "7. Leal bueno" << std::endl;
    std::cout << "8. Leal neutro" << std::endl;
    std::cout << "9. Leal malo" << std::endl;
    std::cin >> op;
    do{
        switch (op){
        case 1:
            alineamiento = "Caótico bueno";
            break;
        case 2:
            alineamiento = "Caótico neutro";
            break;
        case 3:
            alineamiento = "Caótico malo";
            break;
        case 4:
            alineamiento = "Neutral bueno";
            break;
        case 5:
            alineamiento = "Neutral";
            break;
        case 6:
            alineamiento = "Neutral malo";
            break;
        case 7:
            alineamiento = "Leal bueno";
            break;
        case 8:
            alineamiento = "Leal neutro";
            break;
        case 9:
            alineamiento = "Leal malo";
            break;
        default:
            std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
            std::cin >> op;
            break;
        }
    } while (op < 1 || op > 9);
    personaje.setAlineamiento(alineamiento);

    std::cout << "¿Cuál es tu raza?" << std::endl;
    std::cout << "1. Draconido" << std::endl;
    std::cout << "2. Elfo" << std::endl;
    std::cout << "3. Enano" << std::endl;
    std::cout << "4. Gnomo" << std::endl;
    std::cout << "5. Humano" << std::endl;
    std::cout << "6. Mediano" << std::endl;
    std::cout << "7. Semielfo" << std::endl;
    std::cout << "8. Semiorco" << std::endl;
    std::cout << "9. Tiefling" << std::endl;
    std::cin >> op;
    while (op < 1 || op > 9){
        std::cout << "Vaya, parece que has introducido una raza no válida. Inténtalo de nuevo." << std::endl;
        std::cin >> op;
    }
    raza = razas[op - 1];
    personaje.setRaza(raza);

    std::cout << "¿Deseas generar tus estadísticas?" << std::endl;
    std::cout << "1. Generar automáticamente" << std::endl;
    std::cin >> op;
    
    do {
        switch (op) {
        case 1:
            stats = Estadisticas(personaje.getRaza());
            break;
        default:
            std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
            std::cin >> op;
            break;
        }
    } while (op != 1 && op != 2);

    personaje.mostrarDatos();

}
