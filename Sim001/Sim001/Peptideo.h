#ifndef _PEPTIDEO_H_
#define _PEPTIDEO_H_

#pragma once
class Peptideo
{
public:
	Peptideo();
protected:

	enum class pep {A, B, C, D, E, F, G, H, I, J, K, M, N, O, P, R, S, T, W, Y};

	//tabela de conversão de códons em peptídeos
	static const int AAA = 1;
	//TODO

	char peptideoLetra;
	std::string peptideoSigla;
};

#endif // !_PEPTIDEO_H_
