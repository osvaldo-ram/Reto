#include "pelicula.h"
#include "serie.h"
int main() {
    Pelicula pelicula1("Star Wars: El imperio contraataca", "Ciencia Ficcion", 1980, 124, 10);
    Pelicula pelicula2("Busqueda implacable 1", "Accion", 2008, 93, 8);

    Serie serie1("Goosebumps", "Terror", 1995, 22, 7, 74);
    Serie serie2("The Office", "Comedia", 2005, 22, 9, 201);
    Serie serie3("The Walking Dead", "Drama", 2010, 44, 8, 177);

    int opcion;
    do {
        cout << "\nMenu:\n1. Mostrar Peliculas\n2. Mostrar Series\n3. Calificar un video\n4. Salir\nOpcion: ";
        cin >> opcion;

        if (opcion == 1) {
            pelicula1.muestraDatos();
            pelicula2.muestraDatos();
        } else if (opcion == 2) {
            serie1.muestraDatos();
            serie2.muestraDatos();
            serie3.muestraDatos();
        } else if (opcion == 3) {
            int tipo, nuevaCalif;
            cout << "\nSelecciona un tipo de video a calificar:\n1. Pelicula 1\n2. Pelicula 2\n3. Serie 1\n4. Serie 2\n5. Serie 3\nOpcion: ";
            cin >> tipo;

            cout << "Ingresa una nueva calificacion: ";
            cin >> nuevaCalif;

            switch (tipo) {
                case 1:
                    pelicula1.setCalificacion(nuevaCalif);
                    break;
                case 2:
                    pelicula2.setCalificacion(nuevaCalif);
                    break;
                case 3:
                    serie1.setCalificacion(nuevaCalif);
                    break;
                case 4:
                    serie2.setCalificacion(nuevaCalif);
                    break;
                case 5:
                    serie3.setCalificacion(nuevaCalif);
                    break;
                default:
                    cout << "Seleccion no valida.\n";
            }
        }
    } while (opcion != 4);

    return 0;
}
