#include "Pokladny.h"
// IDpokladny, IdProdavaèe, PocetPolozek, Celková cena
Pokladny::Pokladny(int IDPokladna, int IDpokladni, int pocet)
{
	this->IDpokladny = IDPokladna;
	this->IDPokladniho = IDpokladni;
	this->pocetPolozek = pocet;
	this->hodnota = 0;
}

Pokladny::Pokladny(int IDPokladna, int IDpokladni, int pocet,  int SK)
{
	this->IDpokladny = IDPokladna;
	this->IDPokladniho = IDpokladni;
	this->pocetPolozek = pocet;
	this->hodnota = 0;
	this->SlevKarticka = SK;
}

Pokladny::Pokladny(int IDPokladna, int IDpokladni, int pocet, int SK, int PS)
{
	this->IDpokladny = IDPokladna;
	this->IDPokladniho = IDpokladni;
	this->pocetPolozek = pocet;
	this->SlevKarticka = SK;
	this->hodnota = 0;
	this->pocetSlev = PS;
}

int Pokladny::GetIDpokladny()
{
	return this->IDpokladny;
}

int Pokladny::GetIDpokladniho()
{
	return this->IDPokladniho;
}

int Pokladny::GetPocetSlev()
{
	return this->pocetSlev;
}

int Pokladny::GetSlevKarticka()
{
	return this->SlevKarticka;
}

int Pokladny::GetPocetPolozek()
{
	return this->pocetPolozek;
}

float Pokladny::GetHodnota()
{
	return this->hodnota;
}

void Pokladny::addPolozka(std::string polozka, float cena)
{
	std::cout << polozka << " byl namarkován za cenu: " << cena << "\n";
	pocetPolozek++;
	hodnota += cena;
}

void Pokladny::zaplat(float money)
{
	//EFI_TERMINAL_ADDTOBANK(money)
} 
