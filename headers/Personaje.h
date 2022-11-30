/*+
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * En este archivo se encuentran funciones que se utilizan en el programa.
 */

#ifndef PERSONAJE_H // Si no esta definido el preprocesador PERSONAJE_H
#define PERSONAJE_H // Definir el preprocesador PERSONAJE_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "Raza.h" // Incluir la clase Raza
#include "Clase.h" // Incluir la clase Clase
#include "Estadisticas.h" // Incluir la clase Estadisticas
#include "Arma.h" // Incluir la clase Arma
#include "Armadura.h" // Incluir la clase Armadura
#include "Inicializador.h" // Incluir la clase Inicializador

class Personaje
{
private:
    // Atributos
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

/**
 * Constructor por default
 * 
 * @param
 * @return
 */

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

/**
 * Constructor con parametros
 * 
 * @param nombre
 * @param genero
 * @param edad
 * @param alineamiento
 * @param clase
 * @param raza
 * @param estadisticas
 * @param arma
 * @param armadura
 * @return
 */

Personaje::Personaje(std::string nombre, std::string genero, int edad, std::string alineamiento, 
    Clase clase, Raza raza, Estadisticas estadisticas, Arma arma, Armadura armadura)
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

/**
 * Obtener el nombre del personaje
 * 
 * @param
 * @return nombre
 */

std::string Personaje::getNombre()
{
    return this->nombre;
}

/**
 * Obtener el genero del personaje
 * 
 * @param
 * @return genero
 */

std::string Personaje::getGenero()
{
    return this->genero;
}

/**
 * Obtener la edad del personaje
 * 
 * @param
 * @return edad
 */

int Personaje::getEdad()
{
    return this->edad;
}

/**
 * Obtener el alineamiento del personaje
 * 
 * @param
 * @return alineamiento
 */

std::string Personaje::getAlineamiento()
{
    return this->alineamiento;
}

/**
 * Obtener la raza del personaje
 * 
 * @param
 * @return raza
 */

Raza Personaje::getRaza()
{
    return this->raza;
}

/**
 * Obtener la clase del personaje
 * 
 * @param
 * @return clase
 */

Estadisticas Personaje::getEstadisticas()
{
    return this->estadisticas;
}

/**
 * Obtener las estadisticas del personaje
 * 
 * @param
 * @return estadisticas
 */

Arma Personaje::getArma()
{
    return this->arma;
}

/**
 * Obtener la arma del personaje
 * 
 * @param
 * @return arma
 */

Armadura Personaje::getArmadura()
{
    return this->armadura;
}

// Setters

/**
 * Establecer el nombre del personaje
 * 
 * @param nombre
 * @return
 */

void Personaje::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

/**
 * Establecer el genero del personaje
 * 
 * @param genero
 * @return
 */

void Personaje::setGenero(std::string genero)
{
    this->genero = genero;
}

/**
 * Establecer la edad del personaje
 * 
 * @param edad
 * @return
 */

void Personaje::setEdad(int edad)
{
    this->edad = edad;
}

/**
 * Establecer el alineamiento del personaje
 * 
 * @param alineamiento
 * @return
 */

void Personaje::setAlineamiento(std::string alineamiento)
{
    this->alineamiento = alineamiento;
}

/**
 * Establecer la raza del personaje
 * 
 * @param raza
 * @return
 */

void Personaje::setRaza(Raza raza)
{
    this->raza = raza;
}

/**
 * Establecer la clase del personaje
 * 
 * @param clase
 * @return
 */

void Personaje::setEstadisticas(Estadisticas estadisticas)
{
    this->estadisticas = estadisticas;
}

/**
 * Establecer las estadisticas del personaje
 * 
 * @param estadisticas
 * @return
 */

void Personaje::setArma(Arma arma)
{
    this->arma = arma;
}

/**
 * Establecer la arma del personaje
 * 
 * @param arma
 * @return
 */

void Personaje::setArmadura(Armadura armadura)
{
    this->armadura = armadura;
}

// Metodos

/**
 * Mostrar el personaje
 * 
 * @param
 * @return
 */

void Personaje::mostrarPersonaje()
{
    std::cout << "DATOS DEL PERSONAJE" << nombre << std::endl;
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "Genero: " << this->genero << std::endl;
    std::cout << "Edad: " << this->edad << std::endl;
    std::cout << "Alineamiento: " << this->alineamiento << std::endl;
    std::cout << "Raza: " << this->raza.getNombre() << std::endl;
    std::cout << "Clase: " << this->clase.getNombre() << std::endl;
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

/**
 * Mostrar las estadisticas del personaje
 * 
 * @param
 * @return
 */

void Personaje::mostrarRaza()
{
    raza.mostrarRaza();
}

/**
 * Mostrar las estadisticas del personaje
 * 
 * @param razas
 * @param opcion
 * @return
 */

void Personaje::definirRaza(Raza *razas, int opcion)
{
    raza = razas[opcion];
}

/**
 * Mostrar las estadisticas del personaje
 * 
 * @param
 * @return
 */

void Personaje::mostrarEstadisticas()
{
    this->estadisticas.mostrarEstadisticas();
}

/**
 * Mostrar las estadisticas del personaje
 * 
 * @param raza
 * @return
 */

void Personaje::definirEstadisticas(Raza raza)
{
    estadisticas = Estadisticas(raza);
}

/**
 * Mostrar las estadisticas del personaje
 * 
 * @param
 * @return
 */

void Personaje::mostrarClase()
{
    clase.mostrarClase();
}

/**
 * Mostrar las estadisticas del personaje
 * 
 * @param clases
 * @param opcion
 * @return
 */

void Personaje::definirClase(Clase *clases, int opcion)
{
    clase = clases[opcion];
    arma = clase.getArmaInicial();
    armadura = clase.getArmaduraInicial();
}

#endif // Fin del preprocesador PERSONAJE_H