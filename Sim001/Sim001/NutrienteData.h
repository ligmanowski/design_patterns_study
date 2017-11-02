#ifndef _NUTRIENTEDATA_H_
#define _NUTRIENTEDATA_H_

#pragma once
class NutrienteData
{
public:
	NutrienteData();
protected:
	std::string nome;
	std::string tipo; //lipídeo, açúcar
	char carga;
};

#endif // !_NUTRIENTEDATA_H_
