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

/* Funciones adicionales */

// Funcion para mostrar las razas

void mostrarRazas(Raza *razas)
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << i + 1 << ". " << razas[i].getNombre() << std::endl;
    }
}

// Funcion para inicializar las razas

Raza *inicializarRazas()
{
    // Abrir el archivo
    std::ifstream archivo("./data/razas.txt");
    // Comprobar que el archivo se ha abierto correctamente
    if (!archivo.is_open())
    {
        std::cout << "Error al abrir el archivo" << std::endl;
        return nullptr;
    }

    // Leer la primera linea para saber el numero de razas
    std::string linea;
    std::getline(archivo, linea);
    int numRazas = std::stoi(linea);

    // Crear el array de razas
    Raza *razas = new Raza[numRazas];

    // Leer el resto de lineas
    int i = 0;
    while (std::getline(archivo, linea))
    {
        std::stringstream ss(linea);
        std::string token;
        std::vector<std::string> tokens;
        while (std::getline(ss, token, '|'))
        {
            tokens.push_back(token);
        }
        // Crear la raza
        Raza raza(tokens[0], tokens[1], std::stoi(tokens[2]), std::stoi(tokens[3]), std::stoi(tokens[4]), std::stoi(tokens[5]), std::stoi(tokens[6]), std::stoi(tokens[7]));
        // Añadir la raza al array
        razas[i] = raza;
        i++;
    }

    // Cerrar el archivo
    archivo.close();

    // Devolver el array de razas
    return razas;
}

// Funcion para mostrar la informacion de una raza

void mostrarInfoRaza(Raza *razas, int opcion)
{
    std::cout << "Nombre: " << razas[opcion - 1].getNombre() << std::endl;
    std::cout << "Descripcion: " << razas[opcion - 1].getDescripcion() << std::endl;
    std::cout << "Modificador de Fuerza: " << razas[opcion - 1].getModificadorFuerza() << std::endl;
    std::cout << "Modificador de Destreza: " << razas[opcion - 1].getModificadorDestreza() << std::endl;
    std::cout << "Modificador de Constitucion: " << razas[opcion - 1].getModificadorConstitucion() << std::endl;
    std::cout << "Modificador de Inteligencia: " << razas[opcion - 1].getModificadorInteligencia() << std::endl;
    std::cout << "Modificador de Sabiduria: " << razas[opcion - 1].getModificadorSabiduria() << std::endl;
    std::cout << "Modificador de Carisma: " << razas[opcion - 1].getModificadorCarisma() << std::endl;
}

#endif
