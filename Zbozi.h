#pragma once
#include <iostream>
class Zbozi
{
private:
	int ID;
	std::string NazevZbozi;
	float cena;
public:
	Zbozi(int Id, std::string NZ, float c);
	~Zbozi();
	
	int GetID();
	std::string GetNazevZbozi();
	void SetNazevZbozi(std::string Nnz);
	float GetCena();
	void SetCena(float Nc);
	
};

