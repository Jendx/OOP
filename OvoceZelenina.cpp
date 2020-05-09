#include "OvoceZelenina.h"


OvoceZelenina::OvoceZelenina(bool OvoceZelenina, float hmot, float CZKG, int id, float C, std::string nazevZ) : Zbozi(id, nazevZ, C)
{
	this->Ovoce = OvoceZelenina;
	this->hmotnost = hmot;
	this->CenaZaKg = CZKG;
}

OvoceZelenina::~OvoceZelenina()
{
}

float OvoceZelenina::GetCena()
{
	float cenaSP;
	cenaSP = this->hmotnost * this->CenaZaKg;
	return cenaSP;
	
}

int OvoceZelenina::GetHmotnost()
{
	return this->hmotnost;
}

bool OvoceZelenina::GetOvoce() // if Ovoce = 1 jedna se o ovoce, if ovoce = 0 jedna se o zeleninu
{
	return this->Ovoce;
}
