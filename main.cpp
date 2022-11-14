#include<iostream>
#include<string>
#include<cstdlib>
#include"headers\Jugador.h"
#include"headers\Estadisticas.h"
#include"headers\Raza.h"
#include"headers\Clase.h"

void mostrarMenu(){
    std::cout << "1. Crear personaje" << std::endl;
    std::cout << "2. Mostrar personaje" << std::endl;
    std::cout << "3. Salir" << std::endl;
}

int main() {

    Raza razas[9];
    razas[0] = Raza("Draconido", "Tu herencia dracónida se manifiesta en una serie de rasgos que compartes con otros dracónidos. Los dracónidos tienden hacia los extremos en la guerra cósmica entre el bien y el mal. La mayoría son buenos, pero los que se ponen de lado del mal pueden ser terriblemente malignos.", 2, 0, 0, 0, 0, 1);
    razas[1] = Raza("Elfo", "Los elfos circulan libremente por las tierras de los humanos, donde siempre son bienvenidos pero nunca se encuentran como en casa. Son gentes conocidas por su poesía, baile, canto, saber y artes mágicas, y gustan de las cosas cuya belleza sea natural y sencilla.", 0, 2, 0, 0, 0, 0);
    razas[2] = Raza("Enano", "En los registros de la mayoría de los mundos, los humanos son la más joven de las razas comunes. Han llegado comparativamente tarde al mundo y sus vidas son más cortas que las de enanos, elfos y dragones. Y quizá sea precisamente por estas breves existencias por lo que los humanos aspiran a conseguir tanto como sean capaces en los años que se les han concedido.", 0, 0, 2, 0, 0, 0);
    razas[3] = Raza("Gnomo", "Los gnomos son bienvenidos en todas partes como técnicos, alquimistas e inventores, pero muchos de ellos prefieren quedarse entre los suyos aunque sus habilidades estén muy demandadas. Viven en cómodas madrigueras excavadas bajo colinas onduladas y frondosas. Aunque en estos lugares abundan los animales, ir de caza es una pésima idea.", 0, 0, 0, 2, 0, 0);
    razas[4] = Raza("Humano", "En los registros de la mayoría de los mundos, los humanos son la más joven de las razas comunes. Han llegado comparativamente tarde al mundo y sus vidas son más cortas que las de enanos, elfos y dragones. Y quizá sea precisamente por estas breves existencias por lo que los humanos aspiran a conseguir tanto como sean capaces en los años que se les han concedido.", 1, 1, 1, 1, 1, 1);
    razas[5] = Raza("Mediano", "Tu personaje mediano tiene unos cuantos rasgos en común con el resto de medianos. La mayoría de los medianos son neutrales buenos. Como norma general, tienen buen corazón y son amables, odian ver a otros sufrir y no toleran la opresión. También son pacíficos y tradicionales, tienen una fuerte tendencia a apoyar a su comunidad y nunca renuncian a la comodidad de sus costumbres.", 0, 0, 0, 0, 2, 0);
    razas[6] = Raza("Semielfo", "Tu personaje semielfo tiene algunas cracterísticas en común con los elfos y otras que son únicas para los semielfos. Los semielfos comparten la inclinación caótica de su herencia élfica. Valoran tanto la libertad personal como la expresión de la creatividad y no demuestran ni amor por los líderes ni deseo de tener seguidores. Les irritan las reglas, se ofenden ante las exigencias de los demás y a veces son poco fiables o, al menos, impredecibles.", 0, 0, 0, 0, 1, 1);
    razas[7] = Raza("Semiorco", "Tu personaje semiorco tiene ciertos rasgos que derivan de su ancestro orco. Los semiorcos heredan la tendencia hacia el caos de sus progenitores orcos y no están muy inclinados hacia el bien. Los semiorcos que se crían entre orcos y que permanecen entre ellos suelen ser malignos.", 0, 0, 0, 0, 1, 1);
    razas[8] = Raza("Tiefling", "Puede que los tieflings no tengan una tendencia innata hacia el mal, pero muchos de ellos acaban ahí. Maligna o no, una fuerza externa inclina a muchos tieflings hacia un alineamiento caótico.", 0, 0, 0, 0, 1, 1);

    std::string nombre, genero, alineamiento;
    int edad, op;
    Jugador jugador;
    Raza raza = Raza();
    Estadisticas stats = Estadisticas();

    std::cout << "¡Bienvenido aventurero/a! Presione enter para continuar:" << std::endl;
    std::cin.get();

    std::cout << "¿Cuál es tu nombre?" << std::endl;
    std::cin >> nombre;
    jugador.setNombre(nombre);

    std::cout << "¿Cuál es tu género?" << std::endl;
    std::cout << "1. Masculino" << std::endl;
    std::cout << "2. Femenino" << std::endl;
    std::cout << "3. Otro" << std::endl;
    std::cin >> op;
    do{
        switch (op){
        case 1:
            genero = "Masculino";
            break;
        case 2:
            genero = "Femenino";
            break;
        case 3:
            genero = "Otro";
            break;
        default:
            std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
            std::cin >> op;
            break;
        }
    } while (op != 1 && op != 2 && op != 3);
    jugador.setGenero(genero);

    std::cout << "¿Cuál es tu edad?" << std::endl;
    std::cin >> edad;
    while (edad < 0){
        std::cout << "Vaya, parece que has introducido una edad no válida. Inténtalo de nuevo." << std::endl;
        std::cin >> edad;
    }
    jugador.setEdad(edad);

    std::cout << "¿Cuál es tu alineamiento?" << std::endl;
    std::cout << "1. Caótico bueno" << std::endl;
    std::cout << "2. Caótico neutro" << std::endl;
    std::cout << "3. Caótico malo" << std::endl;
    std::cout << "4. Neutral bueno" << std::endl;
    std::cout << "5. Neutral" << std::endl;
    std::cout << "6. Neutral malo" << std::endl;
    std::cout << "7. Leal bueno" << std::endl;
    std::cout << "8. Leal neutro" << std::endl;
    std::cout << "9. Leal malo" << std::endl;
    std::cin >> alineamiento;
    while (alineamiento < "1" || alineamiento > "9"){
        std::cout << "Vaya, parece que has introducido un alineamiento no válido. Inténtalo de nuevo." << std::endl;
        std::cin >> alineamiento;
    }
    jugador.setAlineamiento(alineamiento);

    std::cout << "¿Cuál es tu raza?" << std::endl;
    std::cout << "1. Draconido" << std::endl;
    std::cout << "2. Elfo" << std::endl;
    std::cout << "3. Enano" << std::endl;
    std::cout << "4. Gnomo" << std::endl;
    std::cout << "5. Humano" << std::endl;
    std::cout << "6. Mediano" << std::endl;
    std::cout << "7. Semielfo" << std::endl;
    std::cout << "8. Semiorco" << std::endl;
    std::cout << "9. Tiefling" << std::endl;
    std::cin >> op;
    while (op < 1 || op > 9){
        std::cout << "Vaya, parece que has introducido una raza no válida. Inténtalo de nuevo." << std::endl;
        std::cin >> op;
    }
    raza = razas[op - 1];
    jugador.setRaza(raza);

    std::cout << "¿Deseas generar tus estadísticas?" << std::endl;
    std::cout << "1. Generar automáticamente" << std::endl;
    std::cin >> op;
    
    do {
        switch (op) {
        case 1:
            stats = Estadisticas(jugador.getRaza());
            break;
        default:
            std::cout << "Opción no válida. Inténtelo de nuevo." << std::endl;
            std::cin >> op;
            break;
        }
    } while (op != 1 && op != 2);

    jugador.mostrarDatos();

}
