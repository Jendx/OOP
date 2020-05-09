#pragma once
#include <iostream>

class Zakaznik
{
private:
	int vek;
	std::string JmenoPrimeni;
	int Penize;
	std::string SeznamZbozi[50];
	int pocetZbozi;
	int IDSlevKarty;
	int PocetSlevKupónù;
	float cena[50];
public:
	
	Zakaznik(int v, std::string JP, int p, int ID, int PSK);
	~Zakaznik();

	int GetVek();
	std::string GetJP();
	int GetPenize();
	std::string GetZbozi(int i);
	int GetpocetZbozi();
	int GetIDKarty();
	int GetPSK();
	float GetCenaZ(int i);

	void addZbozi(std::string zbozi, float cena);
	int Zaplat(float hodnota);
};

