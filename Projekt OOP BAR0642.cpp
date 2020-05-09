#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "OvoceZelenina.h"
#include "Zbozi.h"
#include "Firma.h"
#include "Pokladny.h"
#include "Zakaznik.h"

int main()
{
    Firma kaufland("Marek Zackungberg IV"); // ve tøídì firma se využívají statické promìnné, k "Normalizaci" obchodních firem => 
    kaufland.addZamestnanec(); // každá firma muže mít maximalnì 50 zamìstnancù a maximalní rozlohu obchodu 1000m^2
    kaufland.printUdaje();

    Zbozi Pecivo(4843, "Rohlik", 1.90f);
                    
    OvoceZelenina Oz(false, 1.5f, 16.90f, 1871, 0, "Okurka Salátová");
    std::cout << "Cena " << Oz.GetNazevZbozi() << " o váze 1.5Kg " << Oz.GetCena() << "\n\n";
    //  OvoceZelenina je specifický pøípad zboží, jehož cena se odvíjí od hmotnosti
    //  Zde lze vidìt Dìdiènost + lze tam vidìt overriding(Pøetìžuju tam funkci GetCena) v pøedkovy funkce èistì vrátí this->cena; ale v potomkovy se celá cena poèítá
    
    Zakaznik Pet(50, "Andrej Zemák", 1000000, 2684, 10);
    Pet.addZbozi("Rohlik", 1.90f);
    Pet.addZbozi("Chleba", 24.90f);
    Pet.addZbozi("Kokos", 14.90f);

    Pokladny pokladna1(1, 153, Pet.GetpocetZbozi(),Pet.GetIDKarty(),Pet.GetPSK());
    for (int i = 0; i < Pet.GetpocetZbozi(); i++)
    {
        pokladna1.addPolozka(Pet.GetZbozi(i),Pet.GetCenaZ(i));
    }
    std::cout << "\nCelková cena: " << pokladna1.GetHodnota() << std::endl;
    std::cout << "\nZákaznická karta: " << pokladna1.GetSlevKarticka() << std::endl;
}


