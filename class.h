#ifndef class_h
#define class_h

#include <iostream>
#include <string>

using namespace std;
const int m = 70;


class persona{
    private:
        std::string nombre;
        std::string rol;
        int edad;
    
    public:
        persona (std::string n , std::string r , int e);
        std::string getNombre () {return nombre;}
        int getEdad (){return edad;}
        std::string getRol (){return rol;}
        virtual void mostrarDatos () = 0;
};

class jugador : public persona {
    private:
        int numero;
        int rating;
        std::string posicion;
    public:
        jugador();
        jugador(std::string n, std::string r, int e, int num, int ra, std::string pos);
        int getNumero(){return numero;}
        int getRating() {return rating;}
        void mostrarDatos();
};

class coach : public persona {
    private:
        std::string jerarquia;
        std::string posicion;
        int experiencia;
    public:
        coach(std::string n, std::string r, int e, std::string j, std::string pos, int exp);
        int getExp() {return experiencia;}
        std::string getPos(){return posicion;}
        void mostrarDatos();
};

class equipo{
    private:
        jugador *jugadores[m];
        coach *coaches[m];
        int numJugadores;
        int numCoaches;
        std::string categoria;
        std::string nombre;
        std::string estado;
        int cp;
    
    public:
        equipo(std::string c , std::string n , std::string e , int cp1);
        void crearEquipo ();
        void mostrarCoaches ();
        void mostrarCoaches (std::string);
        void buscarJugador (std::string , int);
        void buscarRating (int);
        void buscarExp (int);
};

#endif
