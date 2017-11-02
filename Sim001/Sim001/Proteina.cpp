#include "pch.h"
#include "Proteina.h"

Proteina::Proteina(std::string nome, std::string dominio, std::string familia, std::string arquitetura, std::list<Peptideo> peptideos, int qtSitiosCatalicos)
{
	dados = ProteinaData(nome, dominio, familia, arquitetura, peptideos, qtSitiosCatalicos);
}

void Proteina::executaFuncao()
{
}

void Proteina::expirada()
{
}
