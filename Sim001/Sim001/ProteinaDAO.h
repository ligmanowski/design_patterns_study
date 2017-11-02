#ifndef _PROTEINADAO_H_
#define _PROTEINADAO_H_

#include "Proteina.h"

#pragma once
class ProteinaDAO
{
public:
	virtual void create(Proteina p) = 0;
	virtual void read() = 0;
	virtual void update(Proteina p) = 0;
	virtual void deletE(Proteina p) = 0;
	virtual std::list<Proteina> listarProteinas() = 0;
};

#endif // !_PROTEINADAO_H_
