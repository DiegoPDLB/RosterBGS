#ifndef class_h
#define class_h

#include <iostream>
#include <string>

using namespace std;
const int m = 10;


class persona{
    private:
        std::string nombre;
        std::string rol;
        int edad;
    
    public:
        virtual void individuo()=0;
		persona (std::string , std::string , int);
        std::string getNombre () {return nombre;}
        int getEdad (){return edad;}
        std::string getRol (){return rol;}
        void mostrarDatos ();
};

class jugador : public persona {
    private:
        int numero;
        int rating;
        std::string posicion;
    public:
        void individuo(){cout << "jugador"};
		jugador();
        jugador(std::string , std::string , int , int , int , std::string);
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
    	void individuo(){cout << "Coach"};
        coach(std::string , std::string , int , std::string , std::string , int);
        int getExp() {return experiencia;}
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
        equipo(std::string , std::string , std::string , int);
        void crearEquipo ();
        void mostrarCoaches ();
        void buscarJugador (std::string , int);
        void buscarRating (int);
        void buscarExp (int);
};

int main(){
	Individuo*individuo1 = new jugador();
	Individuo*individuo2 = new coach();
	
	individuo1 -> individuo();
	individuo2 -> individuo();

}

#endif
