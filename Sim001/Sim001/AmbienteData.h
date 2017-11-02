#ifndef _AMBIENTEDATA_H_
#define _AMBIENTEDATA_H_


#pragma once

class AmbienteData
{
public:
	AmbienteData();
	AmbienteData(int T, int DT);
protected:
	std::string nome;
	int temperaturaMedia = 0;
	int deltaTemperatura = 0;
};

#endif // !_AMBIENTEDATA_H_
