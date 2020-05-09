#pragma once
#include <iostream>

class Pokladny
{
private:
	int IDpokladny;
	int IDPokladniho;
	int pocetSlev;
	int SlevKarticka;
	int pocetPolozek;
	float hodnota;
public:
	//pocet = PocetSlev, SK = Slevová karta,
	Pokladny(int IDPokladna, int IDpokladni, int pocet);					//Pøetìžování funkcí
	Pokladny(int IDPokladna, int IDpokladni, int pocet, int SK);
	Pokladny(int IDPokladna, int IDpokladni, int pocet, int SK, int PS);

	int GetIDpokladny();
	int GetIDpokladniho();
	int GetPocetSlev();
	int GetSlevKarticka();
	int GetPocetPolozek();
	float GetHodnota();
	void addPolozka(std::string polozka, float cena);
	void zaplat(float money);
};

