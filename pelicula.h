#ifndef PELICULA_H
#define PELICULA_H
#include "video.h"

class Pelicula : public Video {
public:
    Pelicula() : Video() {
        tipoVideo = "Pelicula";
    }
    Pelicula(string nombre, string genero, int anio, int duracion, int calif)
        : Video("Pelicula", nombre, genero, anio, duracion, calif) {}

    void muestraDatos() const override {
        cout << "< Pelicula >\n";
        Video::muestraDatos();
    }
};

#endif // PELICULA_H