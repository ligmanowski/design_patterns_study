#ifndef _PROTEINADAOFLATFILE_H_
#define _PROTEINADAOFLATFILE_H_

#include "Proteina.h"
#include "ProteinaDAO.h"

#pragma once
class ProteinaDAOFlatFile: public ProteinaDAO
{
public:
	ProteinaDAOFlatFile();
	void create(Proteina prot);
	void read(Proteina prot);
	void update(Proteina prot);
	void deletE(Proteina prot);
	std::list<Proteina> listarProteinas();
};

#endif // !_PROTEINADAOFLATFILE_H_
