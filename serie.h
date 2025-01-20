#ifndef SERIE_H
#define SERIE_H
#include "video.h"

class Serie : public Video {
private:
    int numEpisodios;

public:
    Serie() : Video(), numEpisodios(0) {
        tipoVideo = "Serie";
    }
    Serie(string nombre, string genero, int anio, int duracion, int calif, int episodios)
        : Video("Serie", nombre, genero, anio, duracion, calif), numEpisodios(episodios) {}

    int getNumEpisodios() const { return numEpisodios; }
    void setNumEpisodios(int episodios) { numEpisodios = episodios; }

    void muestraDatos() const override {
        cout << "< Serie >\n";
        Video::muestraDatos();
        cout << "Episodios: " << numEpisodios << "\n";
    }
};

#endif // SERIE_H