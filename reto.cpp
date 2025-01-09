#include <iostream>
using namespace std;
#include "video.h"

int main() {
    Video video1;
    Video video2("Pelicula", "Terrifier", "Horror", 2016, 86, 9);

    int opcion;
    do {
        cout << "\nMenu:\n1. Mostrar Videos\n2. Calificar un Video\n3. Salir\nOpcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "\nVideo 1:\n";
            video1.muestraDatos();
            cout << "\nVideo 2:\n";
            video2.muestraDatos();
        } else if (opcion == 2) {
            int nuevaCalif;
            cout << "Ingrese nueva calificacion para el Video 2: ";
            cin >> nuevaCalif;
            video2.calificaVideo(nuevaCalif);
        }
    } while (opcion != 3);

    return 0;
}
