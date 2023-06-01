#pragma once
#include "Reproductor.h"
#include "Procesador.h"
#include "SalidaDeAudio.h"
class Manejo
{
public:
	static Reproductor* crearReproductor();
	static Procesador* crearProcesador();
	static SalidaDeAudio* crearSalidaAudio();
};

