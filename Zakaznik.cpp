#include "Zakaznik.h"
// v = V�k, JP = jmeno p�imen�, p = pen�ze, ID = id karty, PSK po�et slev kup�n�
Zakaznik::Zakaznik(int v, std::string JP, int p, int ID, int PSK)
{
	this->vek = v;
	this->Penize = p;
	this->JmenoPrimeni = JP;
	this->pocetZbozi = 0;
	this->IDSlevKarty = ID;
	this->PocetSlevKup�n� = PSK;
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
	return this->PocetSlevKup�n�;
}

float Zakaznik::GetCenaZ(int i)
{
	return this->cena[i];
}

void Zakaznik::addZbozi(std::string zbozi, float cena)
{
	if (this->GetpocetZbozi() >= 50) {
		std::cout << "Ko��k je ji� pln�, nelze d�le p�id�vat \n";
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
