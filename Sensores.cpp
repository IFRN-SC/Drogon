//pendência em terminar viuVerde() e viuRampa()

#include <robo_hardware2.h>
#include "Sensores.h"

#define DISTANCIA_SONAR 10


bool Sensores::viuObstaculo() {
	return robo.lerSensorSonarFrontal() < DISTANCIA_SONAR;
}

bool Sensores::viuVerde() {
	return false;
}

bool Sensores::viuRampa() {
	return false;
}
