//
// Created by drgem on 12/12/2022.
//

#include "Rezervare.h"

#include <utility>

Rezervare::Rezervare(std::string serviciu, int durata, int pret, std::string locatie) :
                     serviciu(std::move(serviciu)), durata(durata), pret(pret), locatie(std::move(locatie)){}

const std::string &Rezervare::getServiciu() const {
    return serviciu;

}

void Rezervare::setServiciu(const std::string &serviciu_) {
    Rezervare::serviciu = serviciu_;
}

int Rezervare::getDurata() const {
    return durata;

}

void Rezervare::setDurata(int durata_) {
    Rezervare::durata = durata_;
}

int Rezervare::getPret() const {
    return pret;

}

void Rezervare::setPret(int pret_) {
    Rezervare::pret = pret_;
}

const std::string &Rezervare::getLocatie() const {
    return locatie;

}

void Rezervare::setLocatie(const std::string &locatie_) {
    Rezervare::locatie = locatie_;
}

Rezervare::Rezervare(const Rezervare& other) : serviciu{other.serviciu}, durata{other.durata}, pret{other.pret}, locatie{other.locatie} {
    std::cout<<"*";
}

 void Rezervare::afis_rezervare(const Rezervare &r) {
    std::cout << "Ati facut o programare la " << r.getServiciu() << std::endl;
    std::cout << "ce va dura " << r.getDurata() << " minute" << std::endl;
    std::cout << "si va costa " << r.getPret() << " lei" << std::endl;
    std::cout << "va asteptam la adresa " << r.getLocatie() << std::endl;

}
Rezervare& Rezervare:: operator=(const Rezervare& other) = default;

Rezervare::~Rezervare() = default;
