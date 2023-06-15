#ifndef metodos_h
#define metodos_h

#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include "class.h" // Aqui incluimos todo lo que definimos en el archivo clase.cpp en donde estan todos los atributos, metodos, clases que utilizaremos

//-------------------------------------------------------------------

equipo :: equipo (std::string c , std::string n , std::string e , int cp1){
    categoria = c;
    nombre = n;
    estado = e;
    cp = cp1;
    numJugadores = 0;
    numCoaches = 0;
}

void equipo :: crearEquipo (){ // Aqui se agrega el conjunto de datos de cada uno de los jugadores. Discalimer: Somos 75 jugadores, se utilizo solo una muestra pequeÃ±a de datos
// Esta seccion fue actualizada con la correccion en la que agrego archivos txt para poder solucionar la necesidad de crear un nuevo jugador
    ifstream archivoJugadores("jugadores.txt");
    ifstream archivoCoaches("coaches.txt");
    
    // Leer datos de jugadores
    string nombre, rol, posicion;
    int edad, numero, rating;
    int numJugadores = 0;
    while (archivoJugadores >> nombre >> rol >> edad >> numero >> rating >> posicion) {
        jugadores[numJugadores] = new jugador(nombre, rol, edad, numero, rating, posicion);
        numJugadores++;
    }
    
    // Leer datos de coaches
    string nombreCoach, jerarquia, posicionCoach;
    int edadCoach, experiencia;
    int numCoaches = 0;
    while (archivoCoaches >> nombreCoach >> rol >> edadCoach >> jerarquia >> posicionCoach >> experiencia) {
        coaches[numCoaches] = new coach(nombreCoach, rol, edadCoach, jerarquia, posicionCoach, experiencia);
        numCoaches++;
    }
    
    archivoJugadores.close();
    archivoCoaches.close();
    
    // Actualizar el numero de jugadores y entrenadores
    this->numJugadores = numJugadores;
    this->numCoaches = numCoaches;
}

void equipo::anadirJugador () {
    ofstream archivo("jugadores.txt", ios::app);
    if (archivo.is_open()) {
        string nombre, rol, posicion;
        int edad, numero, rating;

        cout << "Nombre: ";
        cin.ignore();
        getline(cin, nombre);

        cout << "Rol: ";
        getline(cin, rol);

        cout << "Edad: ";
        cin >> edad;

        cout << "Numero: ";
        cin >> numero;

        cout << "Rating: ";
        cin >> rating;

        cout << "Posicion: ";
        cin.ignore();
        getline(cin, posicion);

        archivo << endl;
        archivo << nombre << ";" << rol << ";" << edad << ";" << numero << ";" << rating << ";" << posicion;
        archivo.close();
        jugadores[numJugadores] = new jugador(nombre, rol, edad, numero, rating, posicion);
        numJugadores++;
    } else {
        cout << "No se pudo abrir el archivo de jugadores." << endl;
    }
}

void equipo::cargarJugadores () {
    ifstream archivo("jugadores.txt");
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            string nombre, rol, posicion;
            int edad, numero, rating;

            getline(ss, nombre, ';');
            getline(ss, rol, ';');
            ss >> edad;
            ss.ignore();
            ss >> numero;
            ss.ignore();
            ss >> rating;
            ss.ignore();
            getline(ss, posicion);

            jugadores[numJugadores] = new jugador(nombre, rol, edad, numero, rating, posicion);
            numJugadores++;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo de jugadores." << endl;
    }
}

void equipo::cargarCoaches() {
    ifstream archivo("coaches.txt");
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            stringstream ss(linea);
            string nombre, rol, jerarquia, posicion;
            int edad, experiencia;

            getline(ss, nombre, ';');
            getline(ss, rol, ';');
            ss >> edad;
            ss.ignore();
            getline(ss, jerarquia, ';');
            getline(ss, posicion, ';');
            ss >> experiencia;
            ss.ignore();

            coaches[numCoaches] = new coach(nombre, rol, edad, jerarquia, posicion, experiencia);
            numCoaches++;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo de coaches." << endl;
    }
}

void equipo :: mostrarCoaches (){
    for (int i = 0; i < numCoaches; i++){
        coaches[i] -> mostrarDatos();
    }
}

void equipo :: buscarJugador (std::string n, int num){
    for (int i = 0; i < numJugadores; i++){
        if (jugadores[i] -> getNombre() == n || jugadores[i] -> getNumero() == num){
                jugadores[i] -> mostrarDatos();
                cout << endl; 
        } 
    }
}

void equipo :: buscarRating (int r){
    for (int i = 0; i < numJugadores; i++){
        if (jugadores[i] -> getRating() == r){
                jugadores[i] -> mostrarDatos ();
                cout << endl;
        }  
    }
}

void equipo :: buscarExp (int e){
    for (int i = 0; i < numCoaches; i++){
        if (coaches[i] -> getExp() == e){
                coaches[i] -> mostrarDatos ();
                cout << endl;
        }  
    }
}

void equipo :: mostrarCoaches (std::string o){
    for (int i = 0; i < numCoaches; i++){
        if (coaches[i] -> getRol() == o){
                coaches[i] -> mostrarDatos ();
                cout << endl;
        }  
    }
}

//------------------------------------------------

persona :: persona (std::string n , std::string r , int e){
        nombre = n;
        rol = r;
        edad = e;
}

void persona :: mostrarDatos (){
        cout << "Nommbre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Rol: " << rol << endl;
}

//--------------------------------------------------

jugador :: jugador (std::string n, std::string r, int e, int num, int ra, std::string pos) : persona(n ,r ,e){
        numero = num;
        rating = ra;
        posicion = pos;
}

void jugador :: mostrarDatos(){
        cout << "__________________________________" << endl;
        persona :: mostrarDatos();
        cout << "Numero: " << numero << endl;
        cout << "Rating: " << rating << endl;
        cout << "Posicion: " << posicion << endl;
        cout << "__________________________________" << endl << endl;
}

//-----------------------------------------------------

coach :: coach (std::string n, std::string r, int e, std::string j, std::string pos, int exp) : persona(n ,r ,e){
        jerarquia = j;
        experiencia = exp;
        posicion = pos;
}

void coach :: mostrarDatos(){
        cout << "__________________________________" << endl;
        persona :: mostrarDatos();
        cout << "Jerarquia: " << jerarquia << endl;
        cout << "Posicion: " << posicion << endl;
        cout << "Experiencia(aos): " << experiencia << endl;
        cout << "__________________________________" << endl << endl;
}

#endif
