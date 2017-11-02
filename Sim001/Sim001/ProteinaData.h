#ifndef _ProteinaData_H_
#define _ProteinaData_H_

#include "Peptideo.h"

#pragma once
class ProteinaData
{
public:
	ProteinaData(std::string N, std::string D, std::string F, std::string A, std::list<Peptideo> Ps, int S);
	ProteinaData();
private:
	std::string nome;
	std::string dominio;
	std::string familia;
	std::string arquitetura;
	std::list<Peptideo> peptideos;
	int qtSitiosCataliticos;
};

#endif // !_ProteinaData_H_
