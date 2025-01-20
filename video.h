#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
#include <string>
using namespace std;

class Video {
protected:
    string tipoVideo;
    string nombreVideo;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;

public:
    Video() : tipoVideo(""), nombreVideo(""), genero(""), calificacion(0), anioLanzamiento(0), duracion(0) {}
    Video(string tipo, string nombre, string genero, int anio, int duracion, int calif)
        : tipoVideo(tipo), nombreVideo(nombre), genero(genero), anioLanzamiento(anio), duracion(duracion), calificacion(0) {
        setCalificacion(calif);
    }

    string getTipoVideo() const { return tipoVideo; }
    string getNombreVideo() const { return nombreVideo; }
    string getGenero() const { return genero; }
    int getCalificacion() const { return calificacion; }
    int getAnioLanzamiento() const { return anioLanzamiento; }
    int getDuracion() const { return duracion; }

    void setCalificacion(int calif) {
        if (calif >= 1 && calif <= 10) {
            calificacion = calif;
        } else {
            cout << "Calificacion no valida. Debe estar entre 1 y 10.\n";
        }
    }

    virtual void muestraDatos() const {
        cout << "Tipo: " << tipoVideo << "\nNombre: " << nombreVideo << "\nGenero: " << genero
             << "\nAnio: " << anioLanzamiento << "\nDuracion: " << duracion << " minutos"
             << "\nCalificacion: " << calificacion << "\n";
    }

    virtual ~Video() {}
};

#endif // VIDEO_H