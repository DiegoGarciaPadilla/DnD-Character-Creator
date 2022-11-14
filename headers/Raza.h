// En este archivo se define la clase Raza, que representa a una raza la cual puede ser elegida por un jugador.

#ifndef RAZA_H
#define RAZA_H

#include<iostream>
#include<string>

class Raza {
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
        Raza(std::string nombre, std::string descripcion, int modificadorFuerza, int modificadorDestreza, int modificadorConstitucion, int modificadorInteligencia, int modificadorSabiduria, int modificadorCarisma);

        // Getters
        std::string getNombre();
        std::string getDescripcion();
        int getModificadorFuerza();
        int getModificadorDestreza();
        int getModificadorConstitucion();
        int getModificadorInteligencia();
        int getModificadorSabiduria();
        int getModificadorCarisma();

};

Raza::Raza(){
    this->nombre = "Humano";
    this->descripcion = "Los humanos son la raza más común de todo el mundo de D&D. Los humanos son versátiles y pueden adaptarse a cualquier situación. Los humanos son la raza más común de todo el mundo de D&D. Los humanos son versátiles y pueden adaptarse a cualquier situación.";
    this->modificadorFuerza = 1;
    this->modificadorDestreza = 1;
    this->modificadorConstitucion = 1;
    this->modificadorInteligencia = 1;
    this->modificadorSabiduria = 1;
    this->modificadorCarisma = 1;
}

Raza::Raza(std::string nombre, std::string descripcion, int modificadorFuerza, int modificadorDestreza, int modificadorConstitucion, int modificadorInteligencia, int modificadorSabiduria, int modificadorCarisma) {
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->modificadorFuerza = modificadorFuerza;
    this->modificadorDestreza = modificadorDestreza;
    this->modificadorConstitucion = modificadorConstitucion;
    this->modificadorInteligencia = modificadorInteligencia;
    this->modificadorSabiduria = modificadorSabiduria;
    this->modificadorCarisma = modificadorCarisma;
}

std::string Raza::getNombre() {
    return this->nombre;
}

std::string Raza::getDescripcion() {
    return this->descripcion;
}

int Raza::getModificadorFuerza() {
    return this->modificadorFuerza;
}

int Raza::getModificadorDestreza() {
    return this->modificadorDestreza;
}

int Raza::getModificadorConstitucion() {
    return this->modificadorConstitucion;
}

int Raza::getModificadorInteligencia() {
    return this->modificadorInteligencia;
}

int Raza::getModificadorSabiduria() {
    return this->modificadorSabiduria;
}

int Raza::getModificadorCarisma() {
    return this->modificadorCarisma;
}

#endif