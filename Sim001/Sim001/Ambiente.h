#ifndef _AMBIENTE_H_
#define _AMBIENTE_H_

#include "AmbienteData.h"
#include "Nutriente.h"
#include "Organismo.h"

#pragma once
class Ambiente
{
public:

protected:
	AmbienteData parametrosIniciais;
	std::list<Nutriente> nutrientes;
	std::list<Organismo> organismos;
	bool ambienteEsgotado = false;
	int qtOrganismosVivos = 0;
	int qtOrganismosMortos = 0;
	int tempoDeVida = 0;
	int temperaturaAtual = 0;

public:
	Ambiente();
	static void atualizarRecursos();
	std::list<Nutriente> listaNutrientes();
	std::list<Organismo> listaOrganismos();
	
	int getQtOrganismosVivos();
	int getQtOrganismosMortos();
	int getTempoDeVida();
	int getTemperatura();

	void setQtOrganismosVivos();
	void setQtOrganismosMortos();
	void alteraTemperatura();
	
protected:
	void disponibilizaNovosRecursos();
	void atualizaTempoDeVida();


};

#endif // !_AMBIENTE_H_
