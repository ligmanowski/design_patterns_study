#ifndef  _PROTEINA_H_
#define _PROTEINA_H_

#pragma once
#include "ProteinaData.h"
#include "SitioCatalico.h"


/*														*
 * A classe Proteina usa o pattern de Composi��o		*
 * unido ao Private Class Data encontrado em			*
 * ProteinaData. Nesse caso os dados mut�veis da		*
 * entidade est�o presentes em Proteina e os
 * imut�veis (em tempo de execu��o) em ProteinaData		*
*/

class Proteina
{
public:
	Proteina(std::string nome, std::string dominio, std::string familia, std::string arquitetura, std::list<Peptideo> peptideos, int qtSitiosCatalicos);
	void executaFuncao();
	void expirada();
/*	std::string nome;
	std::string dominio;
	std::string familia;
	std::string arquitetura;
	std::list<Peptideo> peptideos;
	int qtSitiosCataliticos;*/
protected:
	ProteinaData dados;
	std::list<SitioCatalico> sitiosCatalicos;
	//~Proteina();
};

#endif // ! _PROTEINA_H_
