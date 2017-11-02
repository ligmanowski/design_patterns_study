#include "pch.h"
#include "mRNA.h"


mRNA::mRNA()
{
}

bool mRNA::getEstadoSitioLigacaoRibossomo()
{
	return sitioLigaçãoRibossomo;
}

void mRNA::adicionarUmaTraducao()
{
	numeroTraducoes++;
	reduzirTTL();
}

void mRNA::reduzirTTL()
{
	ttl--;
}
