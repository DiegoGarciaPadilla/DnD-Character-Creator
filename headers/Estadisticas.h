/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/**
 * Clase Estadisticas: Clase que representa a las estadisticas de un personaje.
 */

#ifndef ESTADISTICAS_H // Si no esta definido el preprocesador ESTADISTICAS_H
#define ESTADISTICAS_H // Definir el preprocesador ESTADISTICAS_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "Raza.h" // Incluir la clase Raza

class Estadisticas
{
private:
    // Atributos
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

// Constructores

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Estadisticas
 */

Estadisticas::Estadisticas()
{
    this->fuerza = rand() % 20 + 1;
    this->destreza = rand() % 20 + 1;
    this->constitucion = rand() % 20 + 1;
    this->inteligencia = rand() % 20 + 1;
    this->sabiduria = rand() % 20 + 1;
    this->carisma = rand() % 20 + 1;
}

/**
 * Constructor con parametros
 *
 * @param raza
 * @return Objeto Estadisticas
 */

Estadisticas::Estadisticas(Raza raza)
{
    this->fuerza = raza.getModificadorFuerza() + (rand() % 20 + 1);
    this->destreza = raza.getModificadorDestreza() + (rand() % 20 + 1);
    this->constitucion = raza.getModificadorConstitucion() + (rand() % 20 + 1);
    this->inteligencia = raza.getModificadorInteligencia() + (rand() % 20 + 1);
    this->sabiduria = raza.getModificadorSabiduria() + (rand() % 20 + 1);
    this->carisma = raza.getModificadorCarisma() + (rand() % 20 + 1);
}

// Getters

/**
 * Getter del atributo fuerza
 *
 * @param
 * @return fuerza
 */

int Estadisticas::getFuerza()
{
    return this->fuerza;
}

/**
 * Getter del atributo destreza
 *
 * @param
 * @return destreza
 */

int Estadisticas::getDestreza()
{
    return this->destreza;
}

/**
 * Getter del atributo constitucion
 *
 * @param
 * @return constitucion
 */

int Estadisticas::getConstitucion()
{
    return this->constitucion;
}

/**
 * Getter del atributo inteligencia
 *
 * @param
 * @return inteligencia
 */

int Estadisticas::getInteligencia()
{
    return this->inteligencia;
}

/**
 * Getter del atributo sabiduria
 *
 * @param
 * @return sabiduria
 */

int Estadisticas::getSabiduria()
{
    return this->sabiduria;
}

/**
 * Getter del atributo carisma
 *
 * @param
 * @return carisma
 */

int Estadisticas::getCarisma()
{
    return this->carisma;
}

// Setters

/**
 * Setter del atributo fuerza
 *
 * @param fuerza
 * @return
 */

void Estadisticas::setFuerza(int fuerza)
{
    this->fuerza = fuerza;
}

/**
 * Setter del atributo destreza
 *
 * @param destreza
 * @return
 */

void Estadisticas::setDestreza(int destreza)
{
    this->destreza = destreza;
}

/**
 * Setter del atributo constitucion
 *
 * @param constitucion
 * @return
 */

void Estadisticas::setConstitucion(int constitucion)
{
    this->constitucion = constitucion;
}

/**
 * Setter del atributo inteligencia
 *
 * @param inteligencia
 * @return
 */

void Estadisticas::setInteligencia(int inteligencia)
{
    this->inteligencia = inteligencia;
}

/**
 * Setter del atributo sabiduria
 *
 * @param sabiduria
 * @return
 */

void Estadisticas::setSabiduria(int sabiduria)
{
    this->sabiduria = sabiduria;
}

/**
 * Setter del atributo carisma
 *
 * @param carisma
 * @return
 */

void Estadisticas::setCarisma(int carisma)
{
    this->carisma = carisma;
}

// Metodos

/**
 * Metodo que muestra las estadisticas de un personaje
 *
 * @param
 * @return
 */

void Estadisticas::mostrarEstadisticas()
{
    std::cout << "Fuerza: " << this->fuerza << std::endl;
    std::cout << "Destreza: " << this->destreza << std::endl;
    std::cout << "Constitucion: " << this->constitucion << std::endl;
    std::cout << "Inteligencia: " << this->inteligencia << std::endl;
    std::cout << "Sabiduria: " << this->sabiduria << std::endl;
    std::cout << "Carisma: " << this->carisma << std::endl;
}

#endif // Fin del preprocesador ESTADISTICAS_H