#ifndef _ORGANISMO_H_
#define _ORGANISMO_H_

#include "DNA.h"
#include "Nutriente.h"
#include "Proteina.h"
#include "mRNA.h"

#pragma once
class Organismo
{
public:
	Organismo();
protected:
	DNA dna;
	std::list<Nutriente> nutrientes;
	std::list<Proteina> proteinas;
	std::list<mRNA> mRNAs;
	int qtRNAPolimerases = 2;

public:
	void realizarFuncoesVitais();
protected:



};

#endif // !_ORGANISMO_H_
