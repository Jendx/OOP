#include "Zakaznik.h"
// v = Vìk, JP = jmeno pøimení, p = peníze, ID = id karty, PSK poèet slev kupónù
Zakaznik::Zakaznik(int v, std::string JP, int p, int ID, int PSK)
{
	this->vek = v;
	this->Penize = p;
	this->JmenoPrimeni = JP;
	this->pocetZbozi = 0;
	this->IDSlevKarty = ID;
	this->PocetSlevKupónù = PSK;
}

Zakaznik::~Zakaznik()
{
}

int Zakaznik::GetVek()
{
	return this->vek;
}

std::string Zakaznik::GetJP()
{
	return this->JmenoPrimeni;
}

int Zakaznik::GetPenize()
{
	return this->Penize;
}

std::string Zakaznik::GetZbozi(int i)
{
	std::string zbozi;
	
		zbozi = this->SeznamZbozi[i];
	
	return zbozi;
}

int Zakaznik::GetpocetZbozi()
{
	return this->pocetZbozi;
}

int Zakaznik::GetIDKarty()
{
	return this->IDSlevKarty;
}

int Zakaznik::GetPSK()
{
	return this->PocetSlevKupónù;
}

float Zakaznik::GetCenaZ(int i)
{
	return this->cena[i];
}

void Zakaznik::addZbozi(std::string zbozi, float cena)
{
	if (this->GetpocetZbozi() >= 50) {
		std::cout << "Košík je již plný, nelze dále pøidávat \n";
		return;
	}
	this->SeznamZbozi[this->pocetZbozi] = zbozi;
	this->cena[this->pocetZbozi] = cena;
	this->pocetZbozi++;
}

int Zakaznik::Zaplat(float hodnota)
{
	this->Penize -= hodnota;
	return hodnota;
}
