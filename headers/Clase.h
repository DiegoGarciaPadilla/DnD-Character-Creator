/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/** 
 * Clase Clase: Clase que representa a las clases que puede tener un personaje.
 */

#ifndef CLASE_H // Si no esta definido el preprocesador CLASE_H
#define CLASE_H // Definir el preprocesador CLASE_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

#include "Arma.h" // Incluir la clase Arma
#include "Armadura.h" // Incluir la clase Armadura

class Clase
{
private:
    std::string nombre;
    std::string descripcion;
    Arma armaInicial;
    Armadura armaduraInicial;
public:
    // Constructores
    Clase();
    Clase(std::string nombre, std::string descripcion, Arma armaInicial, 
        Armadura armaduraInicial);

    // Getters
    std::string getNombre();
    std::string getDescripcion();
    Arma getArmaInicial();
    Armadura getArmaduraInicial();

    // Setters
    void setNombre(std::string nombre);
    void setDescripcion(std::string descripcion);
    void setArmaInicial(Arma armaInicial);
    void setArmaduraInicial(Armadura armaduraInicial);

    // Metodos
    void mostrarClase();
};

// Constructores

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Clase
 */

Clase::Clase()
{
    nombre = "Guerrero";
    descripcion = "Todos los guerreros comparten un dominio magistral de las armas y armaduras, y un exhaustivo conocimiento de las habilidades del combate. Además, están muy relacionados con la muerte, tanto repartiéndola como mirándola fijamente, desafiantes.";
    armaInicial = Arma();
    armaduraInicial = Armadura();
}

/**
 * Constructor con parametros
 *
 * @param nombre
 * @param descripcion
 * @param armaInicial
 * @param armaduraInicial
 * @return Objeto Clase
 */

Clase::Clase(std::string nombre, std::string descripcion, Arma armaInicial, Armadura armaduraInicial)
{
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->armaInicial = armaInicial;
    this->armaduraInicial = armaduraInicial;
}

// Getters

/**
 * Getter del atributo nombre
 *
 * @param
 * @return nombre
 */

std::string Clase::getNombre()
{
    return nombre;
}

/**
 * Getter del atributo descripcion
 *
 * @param
 * @return descripcion
 */

std::string Clase::getDescripcion()
{
    return descripcion;
}

/**
 * Getter del atributo armaInicial
 *
 * @param
 * @return armaInicial
 */

Arma Clase::getArmaInicial()
{
    return armaInicial;
}

/**
 * Getter del atributo armaduraInicial
 *
 * @param
 * @return armaduraInicial
 */

Armadura Clase::getArmaduraInicial()
{
    return armaduraInicial;
}

// Setters

/**
 * Setter del atributo nombre
 *
 * @param nombre
 * @return
 */

void Clase::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

/**
 * Setter del atributo descripcion
 *
 * @param descripcion
 * @return
 */

void Clase::setDescripcion(std::string descripcion)
{
    this->descripcion = descripcion;
}

/**
 * Setter del atributo armaInicial
 *
 * @param armaInicial
 * @return
 */

void Clase::setArmaInicial(Arma armaInicial)
{
    this->armaInicial = armaInicial;
}

/**
 * Setter del atributo armaduraInicial
 *
 * @param armaduraInicial
 * @return
 */

void Clase::setArmaduraInicial(Armadura armaduraInicial)
{
    this->armaduraInicial = armaduraInicial;
}

// Metodos

/**
 * Metodo que muestra la clase
 *
 * @param
 * @return
 */

void Clase::mostrarClase()
{
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Descripcion: " << descripcion << std::endl;
    std::cout << "Arma inicial: " << armaInicial.getNombre() << std::endl;
    std::cout << "Armadura inicial: " << armaduraInicial.getNombre() << std::endl;
}

#endif // Cerrar el preprocesador CLASE_H