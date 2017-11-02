#ifndef  _PROTEINA_H_
#define _PROTEINA_H_

#pragma once
#include "ProteinaData.h"
#include "SitioCatalico.h"


/*														*
 * A classe Proteina usa o pattern de Composição		*
 * unido ao Private Class Data encontrado em			*
 * ProteinaData. Nesse caso os dados mutáveis da		*
 * entidade estão presentes em Proteina e os
 * imutáveis (em tempo de execução) em ProteinaData		*
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
