#ifndef _MRNA_H_
#define _MRNA_H_



#pragma once
class mRNA
{
public:
	int numeroTraducoes = 0;
	int ttl = 5;
	bool sitioLigaçãoRibossomo;
	mRNA();

public:
	bool getEstadoSitioLigacaoRibossomo();
	void adicionarUmaTraducao();
protected:
	void reduzirTTL();
};

#endif // !_MRNA_H_
