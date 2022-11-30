/**
 * DnD Character Creator
 * Diego Antonio Garcia Padilla
 * A01710777
 * 02/12/2022
 */

/*
 * En este archivo se encuentran funciones que se utilizan para inicializar
 * los vectores de objetos.
 */

#ifndef RAZA_H // Si no esta definido el preprocesador RAZA_H
#define RAZA_H // Definir el preprocesador RAZA_H

#include <iostream> // Libreria para entrada y salida de datos
#include <string> // Libreria para manejo de strings

class Raza
{
private:
    // Atributos
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

// Constructor

/**
 * Constructor de la clase Raza
 * 
 * @param
 * @return
 */

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

/**
 * Constructor de la clase Raza
 * 
 * @param nombre
 * @param descripcion
 * @param modificadorFuerza
 * @param modificadorDestreza
 * @param modificadorConstitucion
 * @param modificadorInteligencia
 * @param modificadorSabiduria
 * @param modificadorCarisma
 * @return
 */

Raza::Raza(std::string nombre, std::string descripcion, int modificadorFuerza, 
int modificadorDestreza, int modificadorConstitucion, int modificadorInteligencia, 
int modificadorSabiduria, int modificadorCarisma)
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

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return nombre
 */

std::string Raza::getNombre()
{
    return this->nombre;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return descripcion
 */

std::string Raza::getDescripcion()
{
    return this->descripcion;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return modificadorFuerza
 */

int Raza::getModificadorFuerza()
{
    return this->modificadorFuerza;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return modificadorDestreza
 */

int Raza::getModificadorDestreza()
{
    return this->modificadorDestreza;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return modificadorConstitucion
 */

int Raza::getModificadorConstitucion()
{
    return this->modificadorConstitucion;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return modificadorInteligencia
 */

int Raza::getModificadorInteligencia()
{
    return this->modificadorInteligencia;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return modificadorSabiduria
 */

int Raza::getModificadorSabiduria()
{
    return this->modificadorSabiduria;
}

/**
 * Getter de la clase Raza
 * 
 * @param
 * @return modificadorCarisma
 */

int Raza::getModificadorCarisma()
{
    return this->modificadorCarisma;
}

// Setters

/**
 * Setter de la clase Raza
 * 
 * @param nombre
 * @return
 */

void Raza::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

/**
 * Setter de la clase Raza
 * 
 * @param descripcion
 * @return
 */

void Raza::setDescripcion(std::string descripcion)
{
    this->descripcion = descripcion;
}

/**
 * Setter de la clase Raza
 * 
 * @param modificadorFuerza
 * @return
 */

void Raza::setModificadorFuerza(int modificadorFuerza)
{
    this->modificadorFuerza = modificadorFuerza;
}

/**
 * Setter de la clase Raza
 * 
 * @param modificadorDestreza
 * @return
 */

void Raza::setModificadorDestreza(int modificadorDestreza)
{
    this->modificadorDestreza = modificadorDestreza;
}

/**
 * Setter de la clase Raza
 * 
 * @param modificadorConstitucion
 * @return
 */

void Raza::setModificadorConstitucion(int modificadorConstitucion)
{
    this->modificadorConstitucion = modificadorConstitucion;
}

/**
 * Setter de la clase Raza
 * 
 * @param modificadorInteligencia
 * @return
 */

void Raza::setModificadorInteligencia(int modificadorInteligencia)
{
    this->modificadorInteligencia = modificadorInteligencia;
}

/**
 * Setter de la clase Raza
 * 
 * @param modificadorSabiduria
 * @return
 */

void Raza::setModificadorSabiduria(int modificadorSabiduria)
{
    this->modificadorSabiduria = modificadorSabiduria;
}

/**
 * Setter de la clase Raza
 * 
 * @param modificadorCarisma
 * @return
 */

void Raza::setModificadorCarisma(int modificadorCarisma)
{
    this->modificadorCarisma = modificadorCarisma;
}

// Metodos

/**
 * Muestra por pantalla los datos de la clase Raza
 * 
 * @param
 * @return
 */

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

#endif // Fin del preprocesador RAZA_H
