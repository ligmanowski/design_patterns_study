#include "pch.h"
#include "ProteinaData.h"


ProteinaData::ProteinaData(std::string N, std::string D, std::string F, std::string A, std::list<Peptideo> Ps, int S)
{
	nome = N;
	dominio = D;
	familia = F;
	arquitetura = A;
	peptideos = Ps;
	qtSitiosCataliticos = S;
}

ProteinaData::ProteinaData()
{
}
