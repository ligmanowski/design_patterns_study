#include "pch.h"
#include "Ambiente.h"


Ambiente::Ambiente()
{
}


void Ambiente::atualizarRecursos()
{
}

std::list<Nutriente> Ambiente::listaNutrientes()
{
	return std::list<Nutriente>();
}

std::list<Organismo> Ambiente::listaOrganismos()
{
	return std::list<Organismo>();
}

int Ambiente::getQtOrganismosVivos()
{
	return 0;
}

int Ambiente::getQtOrganismosMortos()
{
	return 0;
}

int Ambiente::getTempoDeVida()
{
	return 0;
}

int Ambiente::getTemperatura()
{
	return 0;
}

void Ambiente::setQtOrganismosVivos()
{
	qtOrganismosVivos++;
}

void Ambiente::setQtOrganismosMortos()
{
	qtOrganismosMortos++;
	qtOrganismosVivos--;
	if(qtOrganismosVivos == 0)
	{
		ambienteEsgotado = true;
	}
}

void Ambiente::alteraTemperatura()
{
	if (temperaturaAtual % 2 == 0) {
		temperaturaAtual = temperaturaAtual--;
	}
	else {
		temperaturaAtual = temperaturaAtual++;
	}
}

void Ambiente::disponibilizaNovosRecursos()
{
}

void Ambiente::atualizaTempoDeVida()
{
	if (tempoDeVida > 0) {
		tempoDeVida--;
	}
	else {
		ambienteEsgotado = true;
	}
}
