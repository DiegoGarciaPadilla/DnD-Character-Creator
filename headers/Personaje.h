// En este archivo se define la clase Personaje, que representa a un jugador de la partida.

#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "Raza.h"
#include "Estadisticas.h"

class Personaje
{
private:
    std::string nombre;
    std::string genero;
    int edad;
    std::string alineamiento;
    Raza raza;
    Estadisticas estadisticas;

public:
    // Constructores
    Personaje();
    Personaje(std::string nombre, std::string genero, int edad, std::string alineamiento, Raza raza, Estadisticas estadisticas);

    // Getters
    std::string getNombre();
    std::string getGenero();
    int getEdad();
    std::string getAlineamiento();
    Raza getRaza();
    Estadisticas getEstadisticas();

    // Setters
    void setNombre(std::string nombre);
    void setGenero(std::string genero);
    void setEdad(int edad);
    void setAlineamiento(std::string alineamiento);
    void setRaza(Raza raza);
    void setEstadisticas(Estadisticas estadisticas);

    // Metodos
    void mostrarDatos();
    void mostrarEstadisticas();
};

Personaje::Personaje()
{
    nombre = " ";
    genero = " ";
    edad = 0;
    alineamiento = " ";
    raza = Raza();
    estadisticas = Estadisticas();
}

Personaje::Personaje(std::string nombre, std::string genero, int edad, std::string alineamiento, Raza raza, Estadisticas estadisticas)
{
    this->nombre = nombre;
    this->genero = genero;
    this->edad = edad;
    this->alineamiento = alineamiento;
    this->raza = raza;
    this->estadisticas = estadisticas;
}

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

void Personaje::mostrarDatos()
{
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Genero: " << this->genero << std::endl;
    std::cout << "Edad: " << this->edad << std::endl;
    std::cout << "Alineamiento: " << this->alineamiento << std::endl;
    std::cout << "Raza: " << this->raza.getNombre() << std::endl;
    this->mostrarEstadisticas();
}

void Personaje::mostrarEstadisticas()
{
    this->estadisticas.mostrarEstadisticas();
}

#endif