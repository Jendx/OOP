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
    Firma kaufland("Marek Zackungberg IV"); // ve t��d� firma se vyu��vaj� statick� prom�nn�, k "Normalizaci" obchodn�ch firem => 
    kaufland.addZamestnanec(); // ka�d� firma mu�e m�t maximaln� 50 zam�stnanc� a maximaln� rozlohu obchodu 1000m^2
    kaufland.printUdaje();

    Zbozi Pecivo(4843, "Rohlik", 1.90f);
                    
    OvoceZelenina Oz(false, 1.5f, 16.90f, 1871, 0, "Okurka Sal�tov�");
    std::cout << "Cena " << Oz.GetNazevZbozi() << " o v�ze 1.5Kg " << Oz.GetCena() << "\n\n";
    //  OvoceZelenina je specifick� p��pad zbo��, jeho� cena se odv�j� od hmotnosti
    //  Zde lze vid�t D�di�nost + lze tam vid�t overriding(P�et�uju tam funkci GetCena) v p�edkovy funkce �ist� vr�t� this->cena; ale v potomkovy se cel� cena po��t�
    
    Zakaznik Pet(50, "Andrej Zem�k", 1000000, 2684, 10);
    Pet.addZbozi("Rohlik", 1.90f);
    Pet.addZbozi("Chleba", 24.90f);
    Pet.addZbozi("Kokos", 14.90f);

    Pokladny pokladna1(1, 153, Pet.GetpocetZbozi(),Pet.GetIDKarty(),Pet.GetPSK());
    for (int i = 0; i < Pet.GetpocetZbozi(); i++)
    {
        pokladna1.addPolozka(Pet.GetZbozi(i),Pet.GetCenaZ(i));
    }
    std::cout << "\nCelkov� cena: " << pokladna1.GetHodnota() << std::endl;
    std::cout << "\nZ�kaznick� karta: " << pokladna1.GetSlevKarticka() << std::endl;
}


