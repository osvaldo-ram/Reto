#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
using namespace std;

class Video {
private:
    string tipoVideo;
    string nombreVideo;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;
public:
    Video() : tipoVideo(""), nombreVideo(""), genero(""), calificacion(0), anioLanzamiento(0), duracion(0) {}
    Video(string tipo, string nombre, string genero, int anio, int duracion, int calif) :
        tipoVideo(tipo), nombreVideo(nombre), genero(genero), anioLanzamiento(anio), duracion(duracion), calificacion(0) {
        setCalificacion(calif);
    }
    
   
    string getTipoVideo() const { return tipoVideo; }
    string getNombreVideo() const { return nombreVideo; }
    string getGenero() const { return genero; }
    int getCalificacion() const { return calificacion; }
    int getAnioLanzamiento() const { return anioLanzamiento; }
    int getDuracion() const { return duracion; }
    
   
    void setTipoVideo(string tipo) { tipoVideo = tipo; }
    void setNombreVideo(string nombre) { nombreVideo = nombre; }
    void setGenero(string genero) { this->genero = genero; }
    void setCalificacion(int calif) {
        if (calif >= 1 && calif <= 10) {
            calificacion = calif;
        } else {
            cout << "Calificacion no valida. Debe estar entre 1 y 10.\n";
        }
    }
    void setAnioLanzamiento(int anio) { anioLanzamiento = anio; }
    void setDuracion(int duracion) { this->duracion = duracion; }
    
    void calificaVideo(int calif) { setCalificacion(calif); }
    void muestraDatos() const {
        cout << "Tipo: " << tipoVideo << "\nNombre: " << nombreVideo << "\nGenero: " << genero
             << "\nAnioo: " << anioLanzamiento << "\nDuracion: " << duracion << " minutos"
             << "\nCalificacion: " << calificacion << "\n";
    }
};

#endif // VIDEO_H