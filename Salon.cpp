//
// Created by drgem on 23/10/2022.
//

#include "Salon.h"

//constructor
Salon::Salon(const std::string &adresa_, const int numar_, const int numar2_) {
    this->adresa = adresa_;
    this->numar = numar_;
    this->numar2 = numar2_;
}
//destructor
Salon::~Salon() {

}
//setter
void Salon::setAdresa(const std::string& adresa_) {
    this->adresa = adresa_;
}

//getter
std::string Salon::getAdresa() const {
    return this->adresa;
}


//operator de copiere
Salon &Salon::operator=(const Salon &other) {
    adresa=other.adresa;
    numar=other.numar;
    numar2=other.numar2;
    return *this;
}
