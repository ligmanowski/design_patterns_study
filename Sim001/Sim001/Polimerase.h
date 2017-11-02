#ifndef _POLIMERASE_H_
#define _POLIMERASE_H_

#include "DNA.h"
#include "mRNA.h"

#pragma once
class Polimerase
{
public:
	Polimerase();
protected:
	std::string nome;
	std::string tipo;
	int sigma;
	mRNA _mRNA;

public:
	void buscarSitiosLigacao(DNA dna);
	mRNA getMRNA();
protected:
	void transcreveMRNA();
	void setMRNA();
};

#endif // !_POLIMERASE_H_
