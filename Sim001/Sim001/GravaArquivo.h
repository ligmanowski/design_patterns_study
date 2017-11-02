#ifndef _GRAVAARQUIVO_H_
#define _GRAVAARQUIVO_H_

#include <fstream>

#pragma once
class GravaArquivo
{
public:
	GravaArquivo(Platform::String^ nomeArquivo, Platform::String^ dados);

protected:
	bool preparaCaminho(Platform::String^ nomeArquivo);
	void gravar(Platform::String^ dados);
	std::wofstream m_DadosSaida;
};

#endif // !_GRAVAARQUIVO_H_
