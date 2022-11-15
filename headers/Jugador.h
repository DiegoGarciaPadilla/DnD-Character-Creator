// En este archivo se define la clase Jugador, que representa a un jugador de la partida.

#include<iostream>
#include<string>
#include<cstdlib>
#include"Raza.h"
#include"Estadisticas.h"

class Jugador {
    private:
        std::string nombre;
        std::string genero;
        int edad;
        std::string alineamiento;
        Raza raza;
        Estadisticas estadisticas;
    public:
        // Constructores
        Jugador();
        Jugador(std::string nombre, std::string genero, int edad, std::string alineamiento, Raza raza, Estadisticas estadisticas);

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

Jugador::Jugador() {
    this->nombre = "Jugador";
    this->genero = "Masculino";
    this->edad = 18;
    this->alineamiento = "Neutral";
    this->raza = Raza();
    this->estadisticas = Estadisticas(this->raza);
}

Jugador::Jugador(std::string nombre, std::string genero, int edad, std::string alineamiento, Raza raza, Estadisticas estadisticas) {
    this->nombre = nombre;
    this->genero = genero;
    this->edad = edad;
    this->alineamiento = alineamiento;
    this->raza = raza;
    this->estadisticas = estadisticas;
}

std::string Jugador::getNombre() {
    return this->nombre;
}

std::string Jugador::getGenero() {
    return this->genero;
}

int Jugador::getEdad() {
    return this->edad;
}

std::string Jugador::getAlineamiento() {
    return this->alineamiento;
}

Raza Jugador::getRaza() {
    return this->raza;
}

Estadisticas Jugador::getEstadisticas() {
    return this->estadisticas;
}

void Jugador::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Jugador::setGenero(std::string genero) {
    this->genero = genero;
}

void Jugador::setEdad(int edad) {
    this->edad = edad;
}

void Jugador::setAlineamiento(std::string alineamiento) {
    this->alineamiento = alineamiento;
}

void Jugador::setRaza(Raza raza) {
    this->raza = raza;
}

void Jugador::setEstadisticas(Estadisticas estadisticas) {
    this->estadisticas = estadisticas;
}

void Jugador::mostrarDatos() {
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Genero: " << this->genero << std::endl;
    std::cout << "Edad: " << this->edad << std::endl;
    std::cout << "Alineamiento: " << this->alineamiento << std::endl;
    std::cout << "Raza: " << this->raza.getNombre() << std::endl;
    this->mostrarEstadisticas();
}

void Jugador::mostrarEstadisticas() {
    this->estadisticas.mostrarEstadisticas();
}
