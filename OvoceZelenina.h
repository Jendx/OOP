#pragma once
#include "Zbozi.h"
#include <iostream>

class OvoceZelenina : public Zbozi
{
private:
	float CenaZaKg;
	float hmotnost;
	bool Ovoce;
public:
	OvoceZelenina(bool OvoceZelenina, float hmot, float CZKG, int id, float C, std::string nazevZ);
	~OvoceZelenina();

	float GetCena();
	int GetHmotnost();
	bool GetOvoce();
};

