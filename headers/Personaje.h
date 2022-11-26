// En este archivo se define la clase Personaje, que representa a un jugador de la partida.

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>
#include <cstdlib>

#include "Raza.h"
#include "Clase.h"
#include "Estadisticas.h"
#include "Arma.h"
#include "Armadura.h"
#include "Inicializador.h"

class Personaje
{
private:
    std::string nombre;
    std::string genero;
    int edad;
    std::string alineamiento;
    Raza raza;
    Clase clase;
    Estadisticas estadisticas;
    Arma arma;
    Armadura armadura;

public:
    // Constructores
    Personaje();
    Personaje(std::string nombre, std::string genero, int edad, std::string alineamiento, 
        Clase clase, Raza raza, Estadisticas estadisticas, Arma arma, Armadura armadura);

    // Getters
    std::string getNombre();
    std::string getGenero();
    int getEdad();
    std::string getAlineamiento();
    Raza getRaza();
    Clase getClase();
    Estadisticas getEstadisticas();
    Arma getArma();
    Armadura getArmadura();

    // Setters
    void setNombre(std::string nombre);
    void setGenero(std::string genero);
    void setEdad(int edad);
    void setAlineamiento(std::string alineamiento);
    void setRaza(Raza raza);
    void setClase(Clase clase);
    void setEstadisticas(Estadisticas estadisticas);
    void setArma(Arma arma);
    void setArmadura(Armadura armadura);

    // Metodos
    void mostrarPersonaje();
    void mostrarRaza();
    void definirRaza(Raza *razas,int opcion);
    void mostrarEstadisticas();
    void definirEstadisticas(Raza raza);
    void mostrarClase();
    void definirClase(Clase *clases, int opcion);
};

Personaje::Personaje()
{
    nombre = " ";
    genero = " ";
    edad = 0;
    alineamiento = "Neutral";
    raza = Raza();
    clase = Clase();
    estadisticas = Estadisticas();
    arma = Arma();
    armadura = Armadura();
}

Personaje::Personaje(std::string nombre, std::string genero, int edad, std::string alineamiento, Clase clase, Raza raza, Estadisticas estadisticas, Arma arma, Armadura armadura)
{
    this->nombre = nombre;
    this->genero = genero;
    this->edad = edad;
    this->alineamiento = alineamiento;
    this->raza = raza;
    this->clase = clase;
    this->estadisticas = estadisticas;
    this->arma = arma;
    this->armadura = armadura;
}

// Getters

std::string Personaje::getNombre()
{
    return this->nombre;
}

std::string Personaje::getGenero()
{
    return this->genero;
}

int Personaje::getEdad()
{
    return this->edad;
}

std::string Personaje::getAlineamiento()
{
    return this->alineamiento;
}

Raza Personaje::getRaza()
{
    return this->raza;
}

Estadisticas Personaje::getEstadisticas()
{
    return this->estadisticas;
}

Arma Personaje::getArma()
{
    return this->arma;
}

Armadura Personaje::getArmadura()
{
    return this->armadura;
}

// Setters

void Personaje::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Personaje::setGenero(std::string genero)
{
    this->genero = genero;
}

void Personaje::setEdad(int edad)
{
    this->edad = edad;
}

void Personaje::setAlineamiento(std::string alineamiento)
{
    this->alineamiento = alineamiento;
}

void Personaje::setRaza(Raza raza)
{
    this->raza = raza;
}

void Personaje::setEstadisticas(Estadisticas estadisticas)
{
    this->estadisticas = estadisticas;
}

void Personaje::setArma(Arma arma)
{
    this->arma = arma;
}

void Personaje::setArmadura(Armadura armadura)
{
    this->armadura = armadura;
}

// Metodos

void Personaje::mostrarPersonaje()
{
    std::cout << "DATOS DEL PERSONAJE" << nombre << std::endl;
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Genero: " << this->genero << std::endl;
    std::cout << "Edad: " << this->edad << std::endl;
    std::cout << "Alineamiento: " << this->alineamiento << std::endl;
    std::cout << "Raza: " << this->raza.getNombre() << std::endl;
    std::cout << std::endl;
    std::cout << "DATOS DE LAS ESTADISTICAS" << std::endl;
    this->mostrarEstadisticas();
    std::cout << std::endl;
    std::cout << "DATOS DEL ARMA" << std::endl;
    arma.mostrarDatos();
    std::cout << std::endl;
    std::cout << "DATOS DE LA ARMADURA" << std::endl;
    armadura.mostrarDatos();
    std::cout << std::endl;
}

void Personaje::mostrarRaza()
{
    raza.mostrarRaza();
}

void Personaje::definirRaza(Raza *razas, int opcion)
{
    raza = razas[opcion];
}

void Personaje::mostrarEstadisticas()
{
    this->estadisticas.mostrarEstadisticas();
}

void Personaje::definirEstadisticas(Raza raza)
{
    estadisticas = Estadisticas(raza);
}

void Personaje::mostrarClase()
{
    clase.mostrarClase();
}

void Personaje::definirClase(Clase *clases, int opcion)
{
    clase = clases[opcion];
}

#endif