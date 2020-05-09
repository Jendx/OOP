#include "Firma.h"

int Firma::MaxPocetZamestnancuNaProdejnu = 50;
std::string Firma::MaxVelikostProdejen = "1000m^2";

Firma::Firma(std::string Majitel)
{
	this->majitelFirmy = Majitel;
	this->PocetZamestnancu = 0;
}

Firma::~Firma()
{
}

int Firma::GetMaxPZNP()
{
	return this->MaxPocetZamestnancuNaProdejnu;
}

std::string Firma::GetMaxVP()
{
	return this->MaxVelikostProdejen;
}

void Firma::addZamestnanec()
{
	PocetZamestnancu++;
}

void Firma::printUdaje()
{
	std::cout << "Maximalni pocet zamìstnancu na firmu = " << this->MaxPocetZamestnancuNaProdejnu << "\n";
	std::cout << "Maximalni veliksot prodejny = " << this->MaxVelikostProdejen << "\n";
	std::cout << "Poèet zamìstnancù = " << this->PocetZamestnancu << "\n";
	std::cout << "Majitel = " << majitelFirmy << "\n";
}
