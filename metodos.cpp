#ifndef metodos_h
#define metodos_h

#include "clases.h"

//-------------------------------------------------------------------

equipo :: equipo (std::string c , std::string n , std::string e , int cp1){
    categoria = c;
    nombre = n;
    estado = e;
    cp = cp1;
    numJugadores = 0;
    numCoaches = 0;
}

void equipo :: crearEquipo (){ //Pendiente 
        //Nombre , rol , edad , numero , rating , posicion
        jugadores[numJugadores] = new jugador("Eduardo Antonio Ollervides Ayala" , "D" , 19 , 0 , 5 , "CB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Diego Armando Roman Osorio" , "D" , 23 , 1 , 4 , "LB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Ian Adalberto Trejo Sanchez" , "D" , 20 , 2 , 4 , "CB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Alexis Dasaef De la Garza Sanchez" , "O" , 24 , 3 , 3 , "WR");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Rodrigo Rafael Cardenas Nomura" , "D" , 23 , 4 , 3 , "DB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Diego Armando Sanchez Carmona" , "D" , 23 , 6 , 4 , "DL");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Luis Alfredo Kobeh Ramirez" , "O" , 24 , 7 , 5 , "QB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Emiliano Jimenez Garcia" , "D" , 23 , 8 , 4 , "LB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Luis Fernando Saenz De la Torre" , "D" , 23 , 9 , 3 , "DB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Asael Bolio Fernandez de Lara" , "D" , 22 , 10 , 5 , "WR");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Carlos Emilio Ollervides Ayala" , "O" , 21 , 13 , 3 , "WR");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Fernando Gabriel Escalona Nava" , "O" , 18 , 14 , 4 , "QB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Nicolas Machado Jaime" , "O" , 18 , 15 , 3 , "QB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Jose Manuel Gameros Alvarez Tostado" , "D" , 22 , 16 , 3 , "CB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Tadeo Eduardo De la Garza Sanchez" , "O" , 20 , 18 , 3 , "RB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Francisco Rivera Barrios" , "O" , 21 , 19 , 3 , "QB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Santiago Gutierrez Uribe" , "D" , 22 , 21 , 4 , "DB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Franco Gutierrez Maceda Chavez" , "O" , 23 , 22 , 3 , "RB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Mauricio Hernandez De la Torre" , "D" , 23 , 23 , 3 , "CB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Edgar Ivan Mancha Alfaro" , "D" , 22 , 24 , 5 , "LB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Fernando Alberto Valencia Vazquez" , "O" , 23 , 26 , 4 , "RB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Marco Aurelio Serrano Vargas" , "D" , 21 , 28 , 4 , "DB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Adrian Roa Aguilar" , "O" , 20 , 30 , 4 , "RB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Santiago Jose Hevia Cortes" , "O" , 22 , 31 , 5 , "RB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Emiliano Morales Quiroga" , "D" , 19 , 32 , 3 , "DB");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Diego Ponce de Leon Betanzos" , "O" , 19 , 75 , 3 , "OL");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Edgar Alexander Carrizalez Lerin" , "O" , 21 , 53 , 5 , "OL");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Arnold Becerra Millan" , "O" , 21 , 77 , 4 , "OL");
        numJugadores++;
        jugadores[numJugadores] = new jugador("Emilio Becerra Millan" , "O" , 19 , 71 , 3 , "OL");
        numJugadores++;
        //Nombre , rol , edad , jerarquia , posicion , experiencia 
        coaches[numCoaches] = new coach("Gustavo Tella Topete " , "O" , 45 , "HC" , "HC" , 20);
        numCoaches++;
        coaches[numCoaches] = new coach("Tadeo Sergio de la Garza Alvarez" , "O" , 55 , "CP" , "CP" , 35);
        numCoaches++;
        coaches[numCoaches] = new coach("Carlos Eduardo Briones Zermeño" , "O" , 31 , "C" , "OL" , 5);
        numCoaches++;
        coaches[numCoaches] = new coach("Alan Axel Vega de Lucio" , "D" , 29 , "CD" , "CD" , 15);
        numCoaches++;
        coaches[numCoaches] = new coach("Javier Rodrigo Garcia Reyes" , "O" , 38 , "CO" , "CO" , 21);
        numCoaches++;
        coaches[numCoaches] = new coach("Jorge Panda Leon" , "O" , 33 , "C" , "TE" , 12);
        numCoaches++;
        coaches[numCoaches] = new coach("Rassielh Lopez" , "D" , 37 , "C" , "DL" , 13);
        numCoaches++;
        coaches[numCoaches] = new coach("Carlos Alberto Hernandez Quintinilla" , "O" , 34 , "C" , "WR" , 13);
        numCoaches++;
        coaches[numCoaches] = new coach("Gilberto Noel Paredes Vega" , "D" , 35 , "C" , "DB" , 18);
        numCoaches++;
        coaches[numCoaches] = new coach("Patricio Eduardo Gleeson Lara" , "D" , 35 , "C" , "LB" , 18);
        numCoaches++;
        coaches[numCoaches] = new coach("Miguel Angel Camacho" , "D" , 49 , "C" , "DL" , 23);
        numCoaches++;
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
