#ifndef _AMBIENTEDAO_H_
#define _AMBIENTEDAO_H_

#include "Ambiente.h"

#pragma once
class AmbienteDAO
{
public:
	virtual void create(Ambiente a) = 0;
	virtual void read() = 0;
	virtual void update(Ambiente a) = 0;
	virtual void deletE(Ambiente a) = 0;
};

#endif // !_AMBIENTEDAO_H_
