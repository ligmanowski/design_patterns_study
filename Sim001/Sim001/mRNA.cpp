#include "pch.h"
#include "mRNA.h"


mRNA::mRNA()
{
}

bool mRNA::getEstadoSitioLigacaoRibossomo()
{
	return sitioLiga��oRibossomo;
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
