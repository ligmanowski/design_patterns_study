#include "pch.h"
#include "GravaArquivo.h"

#include <fstream>

GravaArquivo::GravaArquivo(Platform::String ^ nomeArquivo, Platform::String^ dados)
{
	if (preparaCaminho(nomeArquivo)) {
		gravar(dados);
	}
	
	else { 
		throw std::runtime_error("Falha ao abrir o arquivo.");
	}
}

bool GravaArquivo::preparaCaminho(Platform::String ^ nomeArquivo)
{
	m_DadosSaida.open(std::wstring(Windows::Storage::ApplicationData::Current->LocalFolder->Path->Data()) + L"\\" + nomeArquivo->Data(), std::ios::app);
	
	if (!m_DadosSaida.is_open())
	{
		return false;
	}
	else return true;
}

void GravaArquivo::gravar(Platform::String^ dados)
{
	m_DadosSaida << dados->Data();
	
	if (m_DadosSaida.fail())
	{
		throw std::runtime_error("Falha ao escrever o arquivo.");
	}
}
