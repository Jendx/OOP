#pragma once
#include <iostream>


class Firma
{
private:
    static int MaxPocetZamestnancuNaProdejnu;
    static std::string MaxVelikostProdejen;
    std::string majitelFirmy;

public:
    int PocetZamestnancu;
    Firma(std::string Majitel);
    ~Firma();

    int GetMaxPZNP();
    std::string GetMaxVP();
    void addZamestnanec();
    void printUdaje();
};

