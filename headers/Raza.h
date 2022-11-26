// En este archivo se define la clase Raza, que representa a una raza la cual puede ser elegida por un jugador.

#ifndef RAZA_H
#define RAZA_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

class Raza
{
private:
    std::string nombre;
    std::string descripcion;
    int modificadorFuerza;
    int modificadorDestreza;
    int modificadorConstitucion;
    int modificadorInteligencia;
    int modificadorSabiduria;
    int modificadorCarisma;

public:
    // Constructores
    Raza();
    Raza(std::string nombre, std::string descripcion, int modificadorFuerza,
         int modificadorDestreza, int modificadorConstitucion, int modificadorInteligencia,
         int modificadorSabiduria, int modificadorCarisma);

    // Getters
    std::string getNombre();
    std::string getDescripcion();
    int getModificadorFuerza();
    int getModificadorDestreza();
    int getModificadorConstitucion();
    int getModificadorInteligencia();
    int getModificadorSabiduria();
    int getModificadorCarisma();

    // Setters
    void setNombre(std::string nombre);
    void setDescripcion(std::string descripcion);
    void setModificadorFuerza(int modificadorFuerza);
    void setModificadorDestreza(int modificadorDestreza);
    void setModificadorConstitucion(int modificadorConstitucion);
    void setModificadorInteligencia(int modificadorInteligencia);
    void setModificadorSabiduria(int modificadorSabiduria);
    void setModificadorCarisma(int modificadorCarisma);

    // Metodos
    void mostrarRaza();
};

// Constructor por defecto

Raza::Raza()
{
    nombre = "Humano";
    descripcion = "En los registros de la mayoría de los mundos, los humanos son la más joven de las  comunes. Han llegado comparativamente tarde al mundo y sus vidas son más cortas que las de enanos, elfos y dragones. Y quizá sea precisamente por estas breves existencias por lo que los humanos aspiran a conseguir tanto como sean capaces en los años que se les han concedido.";
    modificadorFuerza = 1;
    modificadorDestreza = 1;
    modificadorConstitucion = 1;
    modificadorInteligencia = 1;
    modificadorSabiduria = 1;
    modificadorCarisma = 1;
}

// Constructor con parametros

Raza::Raza(std::string nombre, std::string descripcion, int modificadorFuerza, int modificadorDestreza, int modificadorConstitucion, int modificadorInteligencia, int modificadorSabiduria, int modificadorCarisma)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->modificadorFuerza = modificadorFuerza;
    this->modificadorDestreza = modificadorDestreza;
    this->modificadorConstitucion = modificadorConstitucion;
    this->modificadorInteligencia = modificadorInteligencia;
    this->modificadorSabiduria = modificadorSabiduria;
    this->modificadorCarisma = modificadorCarisma;
}

// Getters

std::string Raza::getNombre()
{
    return this->nombre;
}

std::string Raza::getDescripcion()
{
    return this->descripcion;
}

int Raza::getModificadorFuerza()
{
    return this->modificadorFuerza;
}

int Raza::getModificadorDestreza()
{
    return this->modificadorDestreza;
}

int Raza::getModificadorConstitucion()
{
    return this->modificadorConstitucion;
}

int Raza::getModificadorInteligencia()
{
    return this->modificadorInteligencia;
}

int Raza::getModificadorSabiduria()
{
    return this->modificadorSabiduria;
}

int Raza::getModificadorCarisma()
{
    return this->modificadorCarisma;
}

// Setters

void Raza::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

void Raza::setDescripcion(std::string descripcion)
{
    this->descripcion = descripcion;
}

void Raza::setModificadorFuerza(int modificadorFuerza)
{
    this->modificadorFuerza = modificadorFuerza;
}

void Raza::setModificadorDestreza(int modificadorDestreza)
{
    this->modificadorDestreza = modificadorDestreza;
}

void Raza::setModificadorConstitucion(int modificadorConstitucion)
{
    this->modificadorConstitucion = modificadorConstitucion;
}

void Raza::setModificadorInteligencia(int modificadorInteligencia)
{
    this->modificadorInteligencia = modificadorInteligencia;
}

void Raza::setModificadorSabiduria(int modificadorSabiduria)
{
    this->modificadorSabiduria = modificadorSabiduria;
}

void Raza::setModificadorCarisma(int modificadorCarisma)
{
    this->modificadorCarisma = modificadorCarisma;
}

// Metodos

void Raza::mostrarRaza()
{
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Descripcion: " << this->descripcion << std::endl;
    std::cout << "Modificador de Fuerza: " << this->modificadorFuerza << std::endl;
    std::cout << "Modificador de Destreza: " << this->modificadorDestreza << std::endl;
    std::cout << "Modificador de Constitucion: " << this->modificadorConstitucion << std::endl;
    std::cout << "Modificador de Inteligencia: " << this->modificadorInteligencia << std::endl;
    std::cout << "Modificador de Sabiduria: " << this->modificadorSabiduria << std::endl;
    std::cout << "Modificador de Carisma: " << this->modificadorCarisma << std::endl;
}

#endif
