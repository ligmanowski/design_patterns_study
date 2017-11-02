#ifndef _AMBIENTEDAOFLATFILE_H_
#define _AMBIENTEDAOFLATFILE_H_

#pragma once

#include "Ambiente.h"
#include "AmbienteDAO.h"

class AmbienteDAOFlatFile
{
public:
	void create(Ambiente a);
	void read();
	void update(Ambiente a);
	void deletE(Ambiente a);

};

#endif // !_AMBIENTEDAOFLATFILE_H_
