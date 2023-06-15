#include <iostream>
#include <Windows.h>
#include "metodos.cpp"
/// En el include ponemos el archivo de metodos.cpp para jalar toda la informacion 

int main(){
    /// Dentro del main solo presentamos las opciones que el usuario podra tomar con sus respectivos if
    SetConsoleOutputCP(CP_UTF8);
    int opcion = 0;
    cout << "Desea conocer el Roster?" << endl;
    cout << "Si = 1 | No = 0" << endl;
    cin >> opcion;
    if (opcion == 1){
        int opcion1 = 0;
        equipo borregos("Mayor Onefa" , "Borregos" , "Queretaro" , 76130);
        borregos.crearEquipo();
        borregos.cargarJugadores();
        borregos.cargarCoaches();
        while (true){
                cout << "__________________________________" << endl;
                cout << "Opciones de roster: " << endl;
                cout << "1. Mostrar Coaches" << endl;
                cout << "2. Mostrar Coaches por unidad" << endl;
                cout << "3. Buscar Experiencia" << endl;
                cout << "4. Buscar Jugador" << endl;
                cout << "5. Buscar Rating" << endl;
                cout << "6. AÃ±adir Jugador" << endl;
                cout << "7. Salir" << endl;
                cout << "__________________________________" << endl;

                cout << "Opcion: ";
                cin >> opcion1;

                if (opcion1 == 1){
                        borregos.mostrarCoaches();  
                }

                else if (opcion1 == 2){
                        std::string pos;
                        cout << "Posicion: ";
                        cin >> pos;
                        borregos.mostrarCoaches(pos);
                }

                else if (opcion1 == 3){
                        int exp;
                        cout << "Cuantos aÃ±os de experiencia? ";
                        cin >> exp;
                        borregos.buscarExp(exp);
                }

                else if (opcion1 == 4){
                        std::string nom;
                        int num;
                        cout << "Nombre: ";
                        cin >> nom;
                        cout << "Numero: ";
                        cin >> num;
                        borregos.buscarJugador(nom , num);
                }

                else if (opcion1 == 5){
                        int ra;
                        cout << "Que calificacion buscas? ";
                        cin >> ra;
                        borregos.buscarRating(ra); 
                }

                else if (opcion1 == 6){
                        borregos.anadirJugador(); 
                }

                else if (opcion1 == 7){
                        break;; 
                }   
        }
    }
    else{
        cout << "Hasta la proxima..." << endl;
    }
        
}
