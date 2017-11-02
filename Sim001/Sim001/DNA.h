#ifndef _DNA_H_
#define _DNA_H_

#pragma once
#include "Gene.h"
class DNA
{
public:
	DNA();
protected:
	std::list<Gene> genes;
};

#endif // !_DNA_H_
