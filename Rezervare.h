//
// Created by drgem on 12/12/2022.
//

#ifndef OOP_REZERVARE_H
#define OOP_REZERVARE_H
#include <iostream>

class Rezervare {
private:
    std::string serviciu;
    int durata;
    int pret;
    std::string locatie;

public:
    Rezervare(std::string serviciu, int durata, int pret, std::string locatie);

    [[nodiscard]] const std::string &getServiciu() const;

    [[nodiscard]] int getDurata() const;

    [[nodiscard]] int getPret() const;

    [[nodiscard]] const std::string &getLocatie() const;

    Rezervare (const Rezervare& other);

    Rezervare& operator=(const Rezervare& other);

    void setServiciu(const std::string &serviciu);

    void setDurata(int durata);

    void setPret(int pret);

    void setLocatie(const std::string &locatie);

    static void afis_rezervare(const Rezervare& r);

    virtual ~Rezervare();
};


#endif //OOP_REZERVARE_H
