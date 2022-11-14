// En este archivo se define la clase Estadisticas, que representa a las estadisticas de un jugador.

#ifndef ESTADISTICAS_H
#define ESTADISTICAS_H

#include<iostream>
#include<string>
#include<cstdlib>
#include"Raza.h"

class Estadisticas {
    private:
        int fuerza;
        int destreza;
        int constitucion;
        int inteligencia;
        int sabiduria;
        int carisma;
    public:
        // Constructores
        Estadisticas();
        Estadisticas(Raza raza);

        // Getters
        int getFuerza();
        int getDestreza();
        int getConstitucion();
        int getInteligencia();
        int getSabiduria();
        int getCarisma();

        // Setters
        void setFuerza(int fuerza);
        void setDestreza(int destreza);
        void setConstitucion(int constitucion);
        void setInteligencia(int inteligencia);
        void setSabiduria(int sabiduria);
        void setCarisma(int carisma);

        // Metodos
        void mostrarEstadisticas();
};

Estadisticas::Estadisticas() {
    this->fuerza = rand() % 20 + 1;
    this->destreza = rand() % 20 + 1;
    this->constitucion = rand() % 20 + 1;
    this->inteligencia = rand() % 20 + 1;
    this->sabiduria = rand() % 20 + 1;
    this->carisma = rand() % 20 + 1;
}

Estadisticas::Estadisticas(Raza raza) {
    this->fuerza = raza.getModificadorFuerza() + (rand() % 20 + 1);
    this->destreza = raza.getModificadorDestreza() + (rand() % 20 + 1);
    this->constitucion = raza.getModificadorConstitucion() + (rand() % 20 + 1);
    this->inteligencia = raza.getModificadorInteligencia() + (rand() % 20 + 1);
    this->sabiduria = raza.getModificadorSabiduria() + (rand() % 20 + 1);
    this->carisma = raza.getModificadorCarisma() + (rand() % 20 + 1);
}

int Estadisticas::getFuerza() {
    return this->fuerza;
}

int Estadisticas::getDestreza() {
    return this->destreza;
}

int Estadisticas::getConstitucion() {
    return this->constitucion;
}

int Estadisticas::getInteligencia() {
    return this->inteligencia;
}

int Estadisticas::getSabiduria() {
    return this->sabiduria;
}

int Estadisticas::getCarisma() {
    return this->carisma;
}

void Estadisticas::setFuerza(int fuerza) {
    this->fuerza = fuerza;
}

void Estadisticas::setDestreza(int destreza) {
    this->destreza = destreza;
}

void Estadisticas::setConstitucion(int constitucion) {
    this->constitucion = constitucion;
}

void Estadisticas::setInteligencia(int inteligencia) {
    this->inteligencia = inteligencia;
}

void Estadisticas::setSabiduria(int sabiduria) {
    this->sabiduria = sabiduria;
}

void Estadisticas::setCarisma(int carisma) {
    this->carisma = carisma;
}

void Estadisticas::mostrarEstadisticas() {
    std::cout << "Fuerza: " << this->fuerza << std::endl;
    std::cout << "Destreza: " << this->destreza << std::endl;
    std::cout << "Constitucion: " << this->constitucion << std::endl;
    std::cout << "Inteligencia: " << this->inteligencia << std::endl;
    std::cout << "Sabiduria: " << this->sabiduria << std::endl;
    std::cout << "Carisma: " << this->carisma << std::endl;
}

#endif