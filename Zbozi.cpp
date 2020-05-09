#include "Zbozi.h"

Zbozi::Zbozi(int Id, std::string NZ, float c)
{
	this->ID = Id;
	this->NazevZbozi = NZ;
	this->cena = c;
}

Zbozi::~Zbozi()
{
}

int Zbozi::GetID()
{
	return this->ID;
}

std::string Zbozi::GetNazevZbozi()
{
	return this->NazevZbozi;
}

void Zbozi::SetNazevZbozi(std::string Nnz)
{
	this->NazevZbozi = Nnz;
}

float Zbozi::GetCena()
{
	return this->cena;
}

void Zbozi::SetCena(float Nc)
{
	this->cena = Nc;
}
